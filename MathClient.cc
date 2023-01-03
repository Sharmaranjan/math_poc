#include <iostream>
#include <memory>
#include <string>
#include <thread>
#include <grpcpp/grpcpp.h>
#include "math.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;

using namespace std;
using grpc::Channel;
using grpc::Status;
using grpc::ClientContext;

class MathClientServiceImpl final : public MathClientService::Service{
	Status UpdateTime(::grpc::ServerContext* context,
		const ::MathClientRequest* request){
		cout<<"Server Time: "<<request->x()<<" ";
		return Status::OK;
	}
};

void RunServer() {
	std::string server_address("0.0.0.0:50052");
	MathClientServiceImpl service;

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
}

int main() {
	//std::thread th(RunServer);
	unique_ptr<MathServerService::Stub> stub;
        stub = MathServerService::NewStub(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
	
	MathServerRequest request;
	request.set_x(2.5);
	request.set_y(3.5);
	MathServerReply reply;
	ClientContext cContext;

	Status status = stub->Add(&cContext, request, &reply);
	if (status.ok()){
		cout<<reply.message()<<endl;
	} else {
		cout<<"failled"<<endl;
	}
}
