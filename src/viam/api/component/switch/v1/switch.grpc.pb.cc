// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: component/switch/v1/switch.proto

#include "component/switch/v1/switch.pb.h"
#include "component/switch/v1/switch.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace viam {
namespace component {
namespace switch_ {
namespace v1 {

static const char* SwitchService_method_names[] = {
  "/viam.component.switch.v1.SwitchService/SetPosition",
  "/viam.component.switch.v1.SwitchService/GetPosition",
  "/viam.component.switch.v1.SwitchService/GetNumberOfPositions",
  "/viam.component.switch.v1.SwitchService/DoCommand",
};

std::unique_ptr< SwitchService::Stub> SwitchService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SwitchService::Stub> stub(new SwitchService::Stub(channel));
  return stub;
}

SwitchService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SetPosition_(SwitchService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetPosition_(SwitchService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetNumberOfPositions_(SwitchService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DoCommand_(SwitchService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SwitchService::Stub::SetPosition(::grpc::ClientContext* context, const ::viam::component::switch_::v1::SetPositionRequest& request, ::viam::component::switch_::v1::SetPositionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetPosition_, context, request, response);
}

void SwitchService::Stub::experimental_async::SetPosition(::grpc::ClientContext* context, const ::viam::component::switch_::v1::SetPositionRequest* request, ::viam::component::switch_::v1::SetPositionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetPosition_, context, request, response, std::move(f));
}

void SwitchService::Stub::experimental_async::SetPosition(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::component::switch_::v1::SetPositionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetPosition_, context, request, response, std::move(f));
}

void SwitchService::Stub::experimental_async::SetPosition(::grpc::ClientContext* context, const ::viam::component::switch_::v1::SetPositionRequest* request, ::viam::component::switch_::v1::SetPositionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetPosition_, context, request, response, reactor);
}

void SwitchService::Stub::experimental_async::SetPosition(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::component::switch_::v1::SetPositionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetPosition_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::component::switch_::v1::SetPositionResponse>* SwitchService::Stub::AsyncSetPositionRaw(::grpc::ClientContext* context, const ::viam::component::switch_::v1::SetPositionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::component::switch_::v1::SetPositionResponse>::Create(channel_.get(), cq, rpcmethod_SetPosition_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::viam::component::switch_::v1::SetPositionResponse>* SwitchService::Stub::PrepareAsyncSetPositionRaw(::grpc::ClientContext* context, const ::viam::component::switch_::v1::SetPositionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::component::switch_::v1::SetPositionResponse>::Create(channel_.get(), cq, rpcmethod_SetPosition_, context, request, false);
}

::grpc::Status SwitchService::Stub::GetPosition(::grpc::ClientContext* context, const ::viam::component::switch_::v1::GetPositionRequest& request, ::viam::component::switch_::v1::GetPositionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetPosition_, context, request, response);
}

void SwitchService::Stub::experimental_async::GetPosition(::grpc::ClientContext* context, const ::viam::component::switch_::v1::GetPositionRequest* request, ::viam::component::switch_::v1::GetPositionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetPosition_, context, request, response, std::move(f));
}

void SwitchService::Stub::experimental_async::GetPosition(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::component::switch_::v1::GetPositionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetPosition_, context, request, response, std::move(f));
}

void SwitchService::Stub::experimental_async::GetPosition(::grpc::ClientContext* context, const ::viam::component::switch_::v1::GetPositionRequest* request, ::viam::component::switch_::v1::GetPositionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetPosition_, context, request, response, reactor);
}

void SwitchService::Stub::experimental_async::GetPosition(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::component::switch_::v1::GetPositionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetPosition_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::component::switch_::v1::GetPositionResponse>* SwitchService::Stub::AsyncGetPositionRaw(::grpc::ClientContext* context, const ::viam::component::switch_::v1::GetPositionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::component::switch_::v1::GetPositionResponse>::Create(channel_.get(), cq, rpcmethod_GetPosition_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::viam::component::switch_::v1::GetPositionResponse>* SwitchService::Stub::PrepareAsyncGetPositionRaw(::grpc::ClientContext* context, const ::viam::component::switch_::v1::GetPositionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::component::switch_::v1::GetPositionResponse>::Create(channel_.get(), cq, rpcmethod_GetPosition_, context, request, false);
}

::grpc::Status SwitchService::Stub::GetNumberOfPositions(::grpc::ClientContext* context, const ::viam::component::switch_::v1::GetNumberOfPositionsRequest& request, ::viam::component::switch_::v1::GetNumberOfPositionsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetNumberOfPositions_, context, request, response);
}

void SwitchService::Stub::experimental_async::GetNumberOfPositions(::grpc::ClientContext* context, const ::viam::component::switch_::v1::GetNumberOfPositionsRequest* request, ::viam::component::switch_::v1::GetNumberOfPositionsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetNumberOfPositions_, context, request, response, std::move(f));
}

void SwitchService::Stub::experimental_async::GetNumberOfPositions(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::component::switch_::v1::GetNumberOfPositionsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetNumberOfPositions_, context, request, response, std::move(f));
}

void SwitchService::Stub::experimental_async::GetNumberOfPositions(::grpc::ClientContext* context, const ::viam::component::switch_::v1::GetNumberOfPositionsRequest* request, ::viam::component::switch_::v1::GetNumberOfPositionsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetNumberOfPositions_, context, request, response, reactor);
}

void SwitchService::Stub::experimental_async::GetNumberOfPositions(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::component::switch_::v1::GetNumberOfPositionsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetNumberOfPositions_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::component::switch_::v1::GetNumberOfPositionsResponse>* SwitchService::Stub::AsyncGetNumberOfPositionsRaw(::grpc::ClientContext* context, const ::viam::component::switch_::v1::GetNumberOfPositionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::component::switch_::v1::GetNumberOfPositionsResponse>::Create(channel_.get(), cq, rpcmethod_GetNumberOfPositions_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::viam::component::switch_::v1::GetNumberOfPositionsResponse>* SwitchService::Stub::PrepareAsyncGetNumberOfPositionsRaw(::grpc::ClientContext* context, const ::viam::component::switch_::v1::GetNumberOfPositionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::component::switch_::v1::GetNumberOfPositionsResponse>::Create(channel_.get(), cq, rpcmethod_GetNumberOfPositions_, context, request, false);
}

::grpc::Status SwitchService::Stub::DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::viam::common::v1::DoCommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DoCommand_, context, request, response);
}

void SwitchService::Stub::experimental_async::DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DoCommand_, context, request, response, std::move(f));
}

void SwitchService::Stub::experimental_async::DoCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::DoCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DoCommand_, context, request, response, std::move(f));
}

void SwitchService::Stub::experimental_async::DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DoCommand_, context, request, response, reactor);
}

void SwitchService::Stub::experimental_async::DoCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DoCommand_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>* SwitchService::Stub::AsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::common::v1::DoCommandResponse>::Create(channel_.get(), cq, rpcmethod_DoCommand_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>* SwitchService::Stub::PrepareAsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::viam::common::v1::DoCommandResponse>::Create(channel_.get(), cq, rpcmethod_DoCommand_, context, request, false);
}

SwitchService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SwitchService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SwitchService::Service, ::viam::component::switch_::v1::SetPositionRequest, ::viam::component::switch_::v1::SetPositionResponse>(
          [](SwitchService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::viam::component::switch_::v1::SetPositionRequest* req,
             ::viam::component::switch_::v1::SetPositionResponse* resp) {
               return service->SetPosition(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SwitchService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SwitchService::Service, ::viam::component::switch_::v1::GetPositionRequest, ::viam::component::switch_::v1::GetPositionResponse>(
          [](SwitchService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::viam::component::switch_::v1::GetPositionRequest* req,
             ::viam::component::switch_::v1::GetPositionResponse* resp) {
               return service->GetPosition(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SwitchService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SwitchService::Service, ::viam::component::switch_::v1::GetNumberOfPositionsRequest, ::viam::component::switch_::v1::GetNumberOfPositionsResponse>(
          [](SwitchService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::viam::component::switch_::v1::GetNumberOfPositionsRequest* req,
             ::viam::component::switch_::v1::GetNumberOfPositionsResponse* resp) {
               return service->GetNumberOfPositions(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SwitchService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SwitchService::Service, ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>(
          [](SwitchService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::viam::common::v1::DoCommandRequest* req,
             ::viam::common::v1::DoCommandResponse* resp) {
               return service->DoCommand(ctx, req, resp);
             }, this)));
}

SwitchService::Service::~Service() {
}

::grpc::Status SwitchService::Service::SetPosition(::grpc::ServerContext* context, const ::viam::component::switch_::v1::SetPositionRequest* request, ::viam::component::switch_::v1::SetPositionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SwitchService::Service::GetPosition(::grpc::ServerContext* context, const ::viam::component::switch_::v1::GetPositionRequest* request, ::viam::component::switch_::v1::GetPositionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SwitchService::Service::GetNumberOfPositions(::grpc::ServerContext* context, const ::viam::component::switch_::v1::GetNumberOfPositionsRequest* request, ::viam::component::switch_::v1::GetNumberOfPositionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SwitchService::Service::DoCommand(::grpc::ServerContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace viam
}  // namespace component
}  // namespace switch
}  // namespace v1

