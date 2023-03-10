LDFLAGS += -L/usr/local/lib  `pkg-config --libs protobuf grpc++`\
           -Wl,--no-as-needed -lgrpc++_reflection -Wl,--as-needed\
           -ldl

CXX = g++

CPPFLAGS += `pkg-config --cflags protobuf grpc`

CXXFLAGS += -std=c++14

GRPC_CPP_PLUGIN = grpc_cpp_plugin

GRPC_CPP_PLUGIN_PATH ?= `which $(GRPC_CPP_PLUGIN)`

all: client server

client: math.pb.o math.grpc.pb.o MathClient.o
	$(CXX) $^ $(LDFLAGS) -o $@

server: math.pb.o math.grpc.pb.o MathServer.o
	$(CXX) $^ $(LDFLAGS) -o $@

.PRECIOUS: %.grpc.pb.cc
%.grpc.pb.cc: %.proto
	protoc --grpc_out=. --plugin=protoc-gen-grpc=$(GRPC_CPP_PLUGIN_PATH) $<

.PRECIOUS: %.pb.cc
%.pb.cc: %.proto
	protoc --cpp_out=. $<

clean:
	rm -f *.o *.pb.cc *.pb.h client server

