#include <fmt/format.h>
#include "Services/ApplicationServices.h"
#include <grpcpp/grpcpp.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int server_port = 4747;

	std::string server_address = "0.0.0.0:1234";
	
	rsf::ApplicationService appService;
    grpc::EnableDefaultHealthCheckService(true);
    grpc::ServerBuilder builder;

    // Listen on the given address without any authentication mechanism.
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());

    // Register "service" as the instance through which we'll communicate with
    // clients. In this case it corresponds to an *synchronous* service.
    builder.RegisterService(&appService);
    
    // Finally assemble the server.
    auto server = builder.BuildAndStart();
    std::cout << "Server listening on " + server_address << std::endl;

    // Wait for the server to shutdown. Note that some other thread must be
    // responsible for shutting down the server for this call to ever return.
    server->Wait();

	return 0;
}
