#pragma once

#include "Application.pb.h"
#include "EletraEnergySolutions.h"

class UtilsApplicationServices
{
public:
    static void display_list(const std::vector<MedidorDeEnergia> &lista_de_medidor, rsf::GetMetersReply *reply);
    static auto convert_meter_line(const MeterLine &line) -> rsf::MeterLineProto;
    static auto convert_meter_line_proto_to_meter_line(const rsf::MeterLineProto &meter_line_proto) -> MeterLine;
};
