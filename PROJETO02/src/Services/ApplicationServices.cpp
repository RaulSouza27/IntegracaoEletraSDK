#include "services/ApplicationServices.h"
#include "fabrica_de_medidor.h"
#include "Application.h"
#include "services/UtilsApplicationServices.h"

namespace rsf
{
    grpc::Status ApplicationService::ApplicationService::GetAvailableLines(grpc::ServerContext *context, const EmptyRequest *request, GetLinesReply *reply)
    {
        reply->add_meter_line(MeterLineProto::APOLO);
        reply->add_meter_line(MeterLineProto::ARES);
        reply->add_meter_line(MeterLineProto::CRONOS);
        reply->add_meter_line(MeterLineProto::ZEUS);

        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::GetAllMeters(grpc::ServerContext *context, const EmptyRequest *request, GetMetersReply *reply)
    {
        auto lista_de_medidores = ees.get_lista_de_medidores();
        UtilsApplicationServices::display_list(lista_de_medidores, reply);
        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::AddMeters(grpc::ServerContext *context, const AddMetersRequest *request, GetMetersReply *reply)
    {
        auto meters = request->meter();

        for (auto it = meters.begin(); it != meters.end(); it++)
        {
            auto meter = create_meter(UtilsApplicationServices::convert_meter_line_proto_to_meter_line(it->meter_line()), it->model(), it->id());
            ees.adicionar_medidor(*meter);
        }

        auto lista_de_medidores = ees.get_lista_de_medidores();
        UtilsApplicationServices::display_list(lista_de_medidores, reply);
        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::DeleteMeters(grpc::ServerContext *context, const DeleteMetersRequest *request, GetMetersReply *reply)
    {
        auto id = request->id();
        for (auto it = id.begin(); it != id.end(); it++)
        {
            ees.delete_meter_by_id(*it);
        }

        auto lista_de_medidores = ees.get_lista_de_medidores();
        UtilsApplicationServices::display_list(lista_de_medidores, reply);

        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::GetLinesOnMeterList(grpc::ServerContext *context, const EmptyRequest *request, GetLinesReply *reply)
    {
        auto lines = ees.get_lines_on_meter_list();

        for (const auto &line : lines)
        {
            reply->add_meter_line(UtilsApplicationServices::convert_meter_line(line));
        }

        return grpc::Status::OK;
    }

    grpc::Status ApplicationService::GetMetersByLine(grpc::ServerContext *context, const GetMetersByLineRequest *request, GetMetersReply *reply)
    {
        auto line = request->meter_line();
        auto lines = UtilsApplicationServices::convert_meter_line_proto_to_meter_line(line);
        auto lista_de_medidores = ees.get_lista_de_medidores_por_linha(lines);
        UtilsApplicationServices::display_list(lista_de_medidores, reply);

        return grpc::Status::OK;
    }

}
