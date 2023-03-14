#include <iostream>
#include <fmt/format.h>
#include <grpcpp/grpcpp.h>
#include "MedidorDeEnergia.h"

int main()
{
    int server_port = 3535;
    auto server_address = fmt::format("0.0.0.0:{:d}", server_port);

    ragc::HotelService hotelService;
    grpc::EnableDefaultHealthCheckService(true);
    grpc::ServerBuilder builder;

    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());

    builder.RegisterService(&hotelService);
    
    auto server = builder.BuildAndStart();
    fmt::print("Server listening on {}\n", server_address);

    server->Wait();


    return 0;
}