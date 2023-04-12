#include <fmt/format.h>
#include "Services/ApplicationServices.h"
#include <grpcpp/grpcpp.h>
#include <iostream>
#include "Application.h"
#include <locale.h>

using namespace std;

int main(int argc, char const *argv[])
{
    std::string server_address = "0.0.0.0:1234";

    rsf::ApplicationService appService;
    grpc::EnableDefaultHealthCheckService(true);
    grpc::ServerBuilder builder;

    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());

    builder.RegisterService(&appService);

    auto server = builder.BuildAndStart();
    std::cout << "Server listening on " + server_address << std::endl;

    server->Wait();

    return 0;
}
