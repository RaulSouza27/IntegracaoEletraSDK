#pragma once

#include "grpcpp/impl/codegen/server_context.h"
#include "grpcpp/impl/codegen/sync_stream.h"
#include "grpcpp/impl/codegen/call_op_set.h"
#include "Application.pb.h"
#include "Application.grpc.pb.h"
#include "EletraEnergySolutions.h"

namespace rsf
{
    class ApplicationService final : public ApplicationProto::Service
    {
    public:
        grpc::Status GetAvailableLines(::grpc::ServerContext *context, const EmptyRequest *request, GetLinesReply *response) override;
        grpc::Status GetAllMeters(::grpc::ServerContext *context, const EmptyRequest *request, GetMetersReply *reply) override;
        grpc::Status AddMeters(grpc::ServerContext *context, const AddMetersRequest *request, GetMetersReply *reply) override;
        grpc::Status DeleteMeters(grpc::ServerContext *context, const DeleteMetersRequest *request, GetMetersReply *reply) override;
        grpc::Status GetLinesOnMeterList(grpc::ServerContext *context, const EmptyRequest *request, GetLinesReply *response) override;
        grpc::Status GetMetersByLine(grpc::ServerContext *context, const GetMetersByLineRequest *request, GetMetersReply *reply) override;
    private:
        auto convert_meter_line(const MeterLine &line)-> MeterLineProto;
        auto convert_meter_line_proto_to_meter_line(const MeterLineProto &meter_line_proto) -> MeterLine;
        void display_list(const std::vector<MedidorDeEnergia> &lista_de_medidor, GetMetersReply *reply);
 
        EletraEnergySolutions ees;
    };
}