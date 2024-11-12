#pragma once

#include <boost/log/expressions/keyword.hpp>
#include <boost/log/sources/global_logger_storage.hpp>
#include <boost/log/sources/severity_channel_logger.hpp>
#include <boost/log/utility/manipulators/add_value.hpp>

#include <chrono>

#include <cstdint>

namespace viam {
namespace sdk {

enum class log_level : std::int8_t {
    trace = -2,
    debug = -1,
    info = 0,  // default value is info
    warning = 1,
    error = 2,
    fatal = 3,
};

std::ostream& operator<<(std::ostream&, log_level);

using LoggerImpl = boost::log::sources::severity_channel_logger_mt<log_level>;

BOOST_LOG_GLOBAL_LOGGER(sdk_logger, LoggerImpl);

BOOST_LOG_ATTRIBUTE_KEYWORD(a_resource_name, "Channel", std::string);
BOOST_LOG_ATTRIBUTE_KEYWORD(a_level, "Severity", viam::sdk::log_level);
BOOST_LOG_ATTRIBUTE_KEYWORD(a_file, "file", const char*);
BOOST_LOG_ATTRIBUTE_KEYWORD(a_line, "line", unsigned int);

void set_global_log_level(log_level);
void set_resource_log_level(const std::string& resource, log_level level);

}  // namespace sdk
}  // namespace viam

// Logging macro for general SDK logs
#define VIAM_LOG(level)                                                          \
    BOOST_LOG_SEV(::viam::sdk::sdk_logger::get(), ::viam::sdk::log_level::level) \
        << ::boost::log::add_value(::viam::sdk::a_file, __FILE__)                \
        << ::boost::log::add_value(::viam::sdk::a_line, __LINE__)

// Logging macro for resource-specific SDK logs.
// This macro is only valid within the implementation of an inheritor of viam::sdk::Resource, where
// `this->name()` is well-formed, and will be used to associate this log record to the resource's
// name.
#define VIAM_RESOURCE_LOG(level) \
    VIAM_LOG(level) << ::boost::log::add_value(::viam::sdk::a_resource_name, this->name())
