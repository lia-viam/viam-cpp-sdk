#include <viam/sdk/log/private/log_backend.hpp>

#include <boost/log/expressions/message.hpp>

#include <viam/sdk/robot/client.hpp>

namespace viam {
namespace sdk {
namespace impl {

LogBackend::LogBackend(std::shared_ptr<RobotClient> parent) : parent_(std::move(parent)) {}

void LogBackend::consume(const boost::log::record_view& rec) {
    parent_->log({},                                       // name
                 {},                                       // level
                 *rec[boost::log::expressions::smessage],  //
                 {}                                        //
    );
}

}  // namespace impl
}  // namespace sdk
}  // namespace viam
