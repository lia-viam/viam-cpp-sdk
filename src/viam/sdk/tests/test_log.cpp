#define BOOST_TEST_MODULE test module test_log
#include <viam/sdk/log/logger.hpp>

#include <iostream>
#include <sstream>

#include <boost/test/included/unit_test.hpp>

#include <viam/sdk/resource/resource.hpp>

namespace viam {
namespace sdktests {

// Buffer output filter to test console logging.
// In practice this is a pain and makes it hard to inspect Boost.Test output,
// so we only use it in the first two test cases below and after that just log to
// a stringstream.
// https://stackoverflow.com/a/5405268
struct cout_redirect {
    cout_redirect() : old(std::cout.rdbuf(os.rdbuf())) {}

    ~cout_redirect() {
        std::cout.rdbuf(old);
    }

    std::ostringstream os;

   private:
    std::streambuf* old;
};

struct ostring_logger {
    ostring_logger() {
        sdk::add_ostream_log(os);
    }

    ~ostring_logger() {
        sdk::remove_ostream_log(os);
    }

    std::ostringstream os;
};

BOOST_FIXTURE_TEST_CASE(test_cout_logging, cout_redirect) {
    VIAM_LOG(info) << "log1";

    const std::string rec = os.str();
    BOOST_CHECK(rec.find("log1") != std::string::npos);

    using namespace std::string_literals;

    for (const std::string& s : {"log1"s, "info"s, sdk::default_resource_name()}) {
        BOOST_CHECK(rec.find(s) != std::string::npos);
    }
}

BOOST_FIXTURE_TEST_CASE(test_additional_stream, cout_redirect) {
    std::ostringstream secondary;

    VIAM_LOG(info) << "Pre setup";
    BOOST_CHECK(secondary.str().empty());
    BOOST_CHECK(os.str().find("Pre setup") != std::string::npos);

    sdk::add_ostream_log(secondary);

    VIAM_LOG(info) << "Both streams";
    BOOST_CHECK(os.str().find("Both streams") != std::string::npos);
    BOOST_CHECK(secondary.str().find("Both streams") != std::string::npos);

    sdk::remove_ostream_log(secondary);
    VIAM_LOG(info) << "Post remove";
    BOOST_CHECK(os.str().find("Post remove") != std::string::npos);
    BOOST_CHECK(secondary.str().find("Post remove") == std::string::npos);
}

BOOST_FIXTURE_TEST_CASE(test_log_filtering, ostring_logger) {
    VIAM_LOG(info) << "pre filter";
    sdk::set_global_log_level(sdk::log_level::warning);

    VIAM_LOG(info) << "not logged";
    VIAM_LOG(warning) << "warning logged";
    VIAM_LOG(error) << "error logged";

    sdk::set_global_log_level(sdk::log_level::info);

    VIAM_LOG(info) << "post filter";

    const std::string logs = os.str();

    BOOST_CHECK(logs.find("not logged") == std::string::npos);

    for (const char* rec : {"pre filter", "warning logged", "error logged", "post filter"}) {
        BOOST_CHECK(logs.find(rec) != std::string::npos);
    }
}

BOOST_FIXTURE_TEST_CASE(test_resource_filtering, ostring_logger) {
    struct Res : sdk::Resource {
        using sdk::Resource::Resource;

        sdk::API api() const override {
            return {};
        }

        void trace(const std::string& msg) {
            VIAM_RESOURCE_LOG(trace) << "trace " << msg;
        }

        void info(const std::string& msg) {
            VIAM_RESOURCE_LOG(info) << "info " << msg;
        }
    };

    Res r1{"r1"};
    Res r2{"r2"};

    r1.info("r1 logged");

    r1.trace("r1 not logged");

    for (const char* s : {"[r1]", "info r1 logged"}) {
        BOOST_CHECK(os.str().find(s) != std::string::npos);
    }

    BOOST_CHECK(os.str().find("r1 not logged") == std::string::npos);

    sdk::set_resource_log_level(r1.name(), sdk::log_level::trace);

    r1.trace("r1 logged");
    r2.trace("r2 not logged");

    BOOST_CHECK(os.str().find("trace r1 logged") != std::string::npos);
    BOOST_CHECK(os.str().find("r2 not logged") == std::string::npos);
}

}  // namespace sdktests
}  // namespace viam
