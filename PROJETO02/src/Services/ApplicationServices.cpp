#include "services/ApplicationServices.h"
#include "fabrica_de_medidor.h"
#include "Application.h"

namespace rsf
{
    grpc::Status ApplicationService::ApplicationService::GetAvailableLines(grpc::ServerContext* context, const EmptyRequest* request, GetLinesReply* reply)
    {
        reply->add_meter_line(MeterLineProto::APOLO);
        reply->add_meter_line(MeterLineProto::ARES);
        reply->add_meter_line(MeterLineProto::CRONOS);
        reply->add_meter_line(MeterLineProto::ZEUS);

        return grpc::Status::OK;
    } 

    grpc::Status ApplicationService::GetAllMeters(grpc::ServerContext* context, const EmptyRequest* request, GetMetersReply* reply)
    {
        auto lista_de_medidores = ees.get_lista_de_medidores();
        display_list(lista_de_medidores,reply);
        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::GetAresMeters(grpc::ServerContext* context, const EmptyRequest* request, GetMetersReply* reply)
    {
        auto lista_de_medidores = ees.get_lista_de_medidores_por_linha(MeterLine::ARES);
        display_list(lista_de_medidores,reply);
        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::GetApoloMeters(grpc::ServerContext* context, const EmptyRequest* request, GetMetersReply* reply)
    {
        auto lista_de_medidores = ees.get_lista_de_medidores_por_linha(MeterLine::APOLO);
        display_list(lista_de_medidores,reply);
        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::GetCronosMeters(grpc::ServerContext* context, const EmptyRequest* request, GetMetersReply* reply)
    {
        auto lista_de_medidores = ees.get_lista_de_medidores_por_linha(MeterLine::CRONOS);
        display_list(lista_de_medidores,reply);
        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::GetZeusMeters(grpc::ServerContext* context, const EmptyRequest* request, GetMetersReply* reply)
    {
        auto lista_de_medidores = ees.get_lista_de_medidores_por_linha(MeterLine::ZEUS);
        display_list(lista_de_medidores,reply);
        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::AddMeters(grpc::ServerContext* context, const AddMetersRequest* request, GetMetersReply* reply)
    {
        auto that = covert_meter_line_proto_to_meter_line(request->meter().meter_line());
        auto meter = create_meter(that,request->meter().model(), request->meter().id());
        ees.adicionar_medidor(*meter);
        auto lista_de_medidores = ees.get_lista_de_medidores();
        display_list(lista_de_medidores,reply);
        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::DeleteMeters(grpc::ServerContext* context, const DeleteMetersRequest* request, GetMetersReply* reply)
    {
        ees.delete_meter_by_id(request->id());
        auto lista_de_medidores = ees.get_lista_de_medidores();
        display_list(lista_de_medidores,reply);

        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::GetLinesOnMeterList(grpc::ServerContext* context, const EmptyRequest* request, GetLinesReply* reply)
    {
        auto lines = ees.get_lines_on_meter_list_2();

        for (const auto &line : lines)
        {
            reply->add_meter_line(convert_meter_line(line));
        }

        return grpc::Status::OK;
    }

    void ApplicationService::display_list(const std::vector<MedidorDeEnergia> &lista_de_medidor, GetMetersReply* reply)
    {
        ApplicationService serv;
        for (int i = 0; i < lista_de_medidor.size(); i++)
        {
            auto medidor = lista_de_medidor.at(i);
            auto ptr = reply->add_meters_list();
            ptr->set_id(medidor.get_id());
            ptr->set_model(medidor.get_model());
            ptr->set_meter_line(convert_meter_line(medidor.get_meter_line()));
        }
    }

    auto ApplicationService::convert_meter_line(const MeterLine &line) -> MeterLineProto
    {
        switch (line)
        {
        case MeterLine::ZEUS:
            return MeterLineProto::ZEUS;
        case MeterLine::ARES:
            return MeterLineProto::ARES;
        case MeterLine::APOLO:
            return MeterLineProto::APOLO;
        case MeterLine::CRONOS:
            return MeterLineProto::CRONOS;
        }
        return MeterLineProto::UNKNOWN_METER_LINE;
    }
    auto ApplicationService::covert_meter_line_proto_to_meter_line(const MeterLineProto &meter_line_proto) -> MeterLine
    {
        switch (meter_line_proto)
        {
        case MeterLineProto::APOLO:
            return MeterLine::APOLO;
        case MeterLineProto::ARES:
            return MeterLine::ARES;
        case MeterLineProto::CRONOS:
            return MeterLine::CRONOS;
        case MeterLineProto::ZEUS:
            return MeterLine::ZEUS;
        }
        return MeterLine::UNKNOWN;
    }
}