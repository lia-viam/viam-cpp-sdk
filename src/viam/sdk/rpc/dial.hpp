#pragma once

#include <chrono>
#include <memory>
#include <string>

#include <boost/optional.hpp>

#include <viam/sdk/common/grpc_fwd.hpp>

namespace viam {
namespace sdk {

class DialOptions;
class ViamChannel {
   public:
    void close();
    ViamChannel(std::shared_ptr<GrpcChannel> channel, const char* path, void* runtime);
    static std::shared_ptr<ViamChannel> dial(const char* uri,
                                             const boost::optional<DialOptions>& options);

    const std::shared_ptr<GrpcChannel>& channel() const;

   private:
    std::shared_ptr<GrpcChannel> channel_;
    const char* path_;
    bool closed_;
    void* rust_runtime_;
};

class Credentials {
   public:
    /// @deprecated use `Credentials(std::string type, std::string payload)`
    Credentials(std::string payload);
    Credentials(std::string type, std::string payload);
    const std::string& type() const;
    const std::string& payload() const;

   private:
    std::string type_;
    std::string payload_;
};

class DialOptions {
   public:
    DialOptions();

    const boost::optional<Credentials>& credentials() const;
    const boost::optional<std::string>& entity() const;
    bool allows_insecure_downgrade() const;
    const std::chrono::duration<float>& timeout() const;

    void set_entity(boost::optional<std::string> entity);
    void set_credentials(boost::optional<Credentials> creds);
    void set_allow_insecure_downgrade(bool allow);
    void set_timeout(std::chrono::duration<float> timeout);

   private:
    // TODO (RSDK-917): We currently don't provide a flag for disabling webRTC, instead relying on a
    // `local` uri. We should update dial logic to consider such a flag.

    /// @brief the URL to authenticate against.
    boost::optional<std::string> auth_entity_;

    /// @brief Credentials for connecting to the robot.
    boost::optional<Credentials> credentials_;

    /// @brief Allows the RPC connection to be downgraded to an insecure connection if detected.
    /// This is only used when credentials are not present.
    bool allow_insecure_downgrade_ = false;

    /// @brief Duration before the dial connection times out
    /// Set to 20sec to match _defaultOfferDeadline in goutils/rpc/wrtc_call_queue.go
    std::chrono::duration<float> timeout_{20};
};

class Options {
   public:
    Options(unsigned int refresh_interval, boost::optional<DialOptions> dial_options)
        : refresh_interval_(std::move(refresh_interval)), dial_options_(std::move(dial_options)) {}

    unsigned int refresh_interval() const;
    const boost::optional<DialOptions>& dial_options() const;

   private:
    /// @brief How often to refresh the status/parts of the robot, in seconds. If set to 0, the
    /// robot will not automatically refresh.
    unsigned int refresh_interval_;
    boost::optional<DialOptions> dial_options_;
};

}  // namespace sdk
}  // namespace viam
