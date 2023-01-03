#include <iostream>
#include <memory>
#include <string>
#include <unistd.h>

//#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
//#include <grpcpp/health_check_service_interface.h>

#include "math.grpc.pb.h"
#include <thread>

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using grpc::ClientContext;
using grpc::Channel;


void StartServerTimer(){
	std::unique_ptr<MathClientService::Stub> stub = MathClientService::NewStub(grpc::CreateChannel("localhost:50052", grpc::InsecureChannelCredentials()));
	while(true){
		MathClientRequest request, reply;
		ClientContext cContext;
		Status status = stub->UpdateTime(&cContext, request, &reply);
		sleep(2);
	}
}

class MathServerServiceImpl final : public MathServerService::Service{
	Status Add(::grpc::ServerContext* context, 
		const ::MathServerRequest* request, 
		::MathServerReply* response){
		response->set_message(request->x() + request->y());
		//std::thread th(StartServerTimer);
		return Status::OK;
	}
};

int main(){
	std::string server_address("0.0.0.0:50051");
	MathServerServiceImpl service;

	grpc::EnableDefaultHealthCheckService(true);
	//grpc::reflection::InitProtoReflectionServerBuilderPlugin();
	ServerBuilder builder;
	// Listen on the given address without any authentication mechanism.
	builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
	// Register "service" as the instance through which we'll communicate with
	// clients. In this case it corresponds to an *synchronous* service.
	builder.RegisterService(&service);
	std::unique_ptr<Server> server(builder.BuildAndStart());
	std::cout << "Server listening on " << server_address << std::endl;
	server->Wait();
	return 0;
}
