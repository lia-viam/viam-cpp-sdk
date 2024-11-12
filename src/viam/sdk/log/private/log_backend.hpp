#pragma once

#include <viam/sdk/log/private/attributes.hpp>

#include <memory>

#include <boost/log/core/record_view.hpp>
#include <boost/log/sinks/basic_sink_backend.hpp>

namespace viam {
namespace sdk {

class RobotClient;

namespace impl {

class LogBackend
    : public boost::log::sinks::basic_sink_backend<boost::log::sinks::synchronized_feeding> {
    using Base = boost::log::sinks::basic_sink_backend<boost::log::sinks::synchronized_feeding>;

   public:
    LogBackend(std::shared_ptr<RobotClient> parent);

    void consume(const boost::log::record_view&);

   private:
    std::shared_ptr<RobotClient> parent_;
};

}  // namespace impl
}  // namespace sdk
}  // namespace viam
