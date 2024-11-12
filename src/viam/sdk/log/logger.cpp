#include <viam/sdk/log/logger.hpp>

#include <boost/log/attributes/clock.hpp>
#include <boost/log/utility/setup/console.hpp>
#include <boost/log/utility/setup/formatter_parser.hpp>

namespace viam {
namespace sdk {

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

BOOST_LOG_GLOBAL_LOGGER_INIT(sdk_logger, LoggerImpl) {
    boost::log::register_simple_formatter_factory<log_level, char>("Severity");

    boost::log::core::get()->add_global_attribute("TimeStamp",
                                                  boost::log::attributes::local_clock());

    auto sink = boost::log::add_console_log(std::cout);
    sink->set_formatter(log_formatter());

    LoggerImpl lg(boost::log::keywords::severity = log_level::info,
                  boost::log::keywords::channel = "C++ SDK");
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

void set_global_log_level(log_level level) {}

}  // namespace sdk
}  // namespace viam
