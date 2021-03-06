// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "CosmosLikeDelegationListCallback.hpp"  // my header
#include "CosmosLikeDelegation.hpp"
#include "Error.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

CosmosLikeDelegationListCallback::CosmosLikeDelegationListCallback() : ::djinni::JniInterface<::ledger::core::api::CosmosLikeDelegationListCallback, CosmosLikeDelegationListCallback>() {}

CosmosLikeDelegationListCallback::~CosmosLikeDelegationListCallback() = default;

CosmosLikeDelegationListCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

CosmosLikeDelegationListCallback::JavaProxy::~JavaProxy() = default;

void CosmosLikeDelegationListCallback::JavaProxy::onCallback(const std::experimental::optional<std::vector<std::shared_ptr<::ledger::core::api::CosmosLikeDelegation>>> & c_result, const std::experimental::optional<::ledger::core::api::Error> & c_error) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::CosmosLikeDelegationListCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onCallback,
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni::List<::djinni_generated::CosmosLikeDelegation>>::fromCpp(jniEnv, c_result)),
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(jniEnv, c_error)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
