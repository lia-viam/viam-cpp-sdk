#include <viam/sdk/log/logger.hpp>

#include <boost/log/attributes/clock.hpp>
#include <boost/log/utility/setup/console.hpp>
#include <boost/log/utility/setup/formatter_parser.hpp>

#include <map>

namespace viam {
namespace sdk {

namespace {

// This namespace contains some Meyers' singletons for log data

struct LogFilter {
    log_level global_severity{log_level::info};
    std::map<std::string, log_level> resource_severity_map;

    static LogFilter& instance() {
        static LogFilter result;
        return result;
    }

    bool filter(const boost::log::attribute_value_set& attrs) {
        auto level = attrs[a_level];
        if (!level) {
            return false;
        }

        auto resource = attrs[a_resource_name];
        if (resource) {
            auto it = resource_severity_map.find(*resource);
            if (it != resource_severity_map.end()) {
                return *level >= it->second;
            }
        }

        return *level >= global_severity;
    }
};

const boost::log::formatter& log_formatter() {
    // According to the Boost.Log docs, this format string syntax is possibly "less optimal"
    // than writing a template expression, but the placeholder expression syntax drives me crazy.
    static auto result = boost::log::parse_formatter(
        "%TimeStamp%: [%Channel%] <%Severity%> [%file%:%line%] %Message%");

    return result;
}

using OstreamBackend = boost::log::sinks::text_ostream_backend;
using OstreamSink = boost::log::sinks::synchronous_sink<OstreamBackend>;

boost::shared_ptr<OstreamSink> ostream_sink() {
    static auto result = boost::make_shared<OstreamSink>(boost::make_shared<OstreamBackend>());

    return result;
}

}  // namespace

BOOST_LOG_GLOBAL_LOGGER_INIT(sdk_logger, LoggerImpl) {
    boost::log::register_simple_formatter_factory<log_level, char>("Severity");

    boost::log::core::get()->add_global_attribute("TimeStamp",
                                                  boost::log::attributes::local_clock());

    auto sink = ostream_sink();

    sink->locked_backend()->add_stream(boost::shared_ptr<std::ostream>(
        reinterpret_cast<std::ostream*>(&std::cout), boost::null_deleter()));
    sink->set_formatter(log_formatter());

    sink->set_filter([](const boost::log::attribute_value_set& attrs) {
        return LogFilter::instance().filter(attrs);
    });

    boost::log::core::get()->add_sink(sink);

    LoggerImpl lg(boost::log::keywords::severity = log_level::info,
                  boost::log::keywords::channel = default_resource_name());
    return lg;
}

std::ostream& operator<<(std::ostream& os, log_level level) {
    switch (level) {
        case log_level::fatal:  // fallthrough
        case log_level::error:
            os << "error";
            break;
        case log_level::warning:
            os << "warning";
            break;
        case log_level::info:
            os << "info";
            break;
        case log_level::debug:
            os << "debug";
            break;
        case log_level::trace:
            os << "trace";
            break;
        default:
            os << static_cast<std::underlying_type_t<log_level>>(level);
            break;
    }

    return os;
}

std::string default_resource_name() {
    return "C++ SDK";
}

void add_ostream_log(std::ostream& os) {
    ostream_sink()->locked_backend()->add_stream(
        boost::shared_ptr<std::ostream>(&os, boost::null_deleter()));
}

void remove_ostream_log(std::ostream& os) {
    // This may be a little inefficient but I consider it preferrable to making the user care about
    // boost::shared_ptr<std::ostream>.
    ostream_sink()->locked_backend()->remove_stream(
        boost::shared_ptr<std::ostream>(&os, boost::null_deleter()));
}

void set_global_log_level(log_level level) {
    LogFilter::instance().global_severity = level;
}

void set_resource_log_level(const std::string& resource, log_level level) {
    LogFilter::instance().resource_severity_map[resource] = level;
}

}  // namespace sdk
}  // namespace viam
