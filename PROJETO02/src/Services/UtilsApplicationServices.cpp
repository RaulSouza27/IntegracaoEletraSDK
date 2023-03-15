#include "services/UtilsApplicationServices.h"

auto UtilsApplicationServices::convert_meter_line(const MeterLine &line) -> rsf::MeterLineProto
{
    switch (line)
    {
    case MeterLine::ZEUS:
        return rsf::MeterLineProto::ZEUS;
    case MeterLine::ARES:
        return rsf::MeterLineProto::ARES;
    case MeterLine::APOLO:
        return rsf::MeterLineProto::APOLO;
    case MeterLine::CRONOS:
        return rsf::MeterLineProto::CRONOS;
    }
    return rsf::MeterLineProto::UNKNOWN_METER_LINE;
}
auto UtilsApplicationServices::convert_meter_line_proto_to_meter_line(const rsf::MeterLineProto &meter_line_proto) -> MeterLine
{
    switch (meter_line_proto)
    {
    case rsf::MeterLineProto::APOLO:
        return MeterLine::APOLO;
    case rsf::MeterLineProto::ARES:
        return MeterLine::ARES;
    case rsf::MeterLineProto::CRONOS:
        return MeterLine::CRONOS;
    case rsf::MeterLineProto::ZEUS:
        return MeterLine::ZEUS;
    }
    return MeterLine::UNKNOWN;
}

void UtilsApplicationServices::display_list(const std::vector<MedidorDeEnergia> &lista_de_medidor, rsf::GetMetersReply *reply)
{
    for (int i = 0; i < lista_de_medidor.size(); i++)
    {
        auto medidor = lista_de_medidor.at(i);
        auto ptr = reply->add_meters_list();
        ptr->set_id(medidor.get_id());
        ptr->set_model(medidor.get_model());
        ptr->set_meter_line(convert_meter_line(medidor.get_meter_line()));
    }
}