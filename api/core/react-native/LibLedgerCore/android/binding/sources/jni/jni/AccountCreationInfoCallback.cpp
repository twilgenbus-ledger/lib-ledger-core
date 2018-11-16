// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "AccountCreationInfoCallback.hpp"  // my header
#include "AccountCreationInfo.hpp"
#include "Error.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

AccountCreationInfoCallback::AccountCreationInfoCallback() : ::djinni::JniInterface<::ledger::core::api::AccountCreationInfoCallback, AccountCreationInfoCallback>() {}

AccountCreationInfoCallback::~AccountCreationInfoCallback() = default;

AccountCreationInfoCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

AccountCreationInfoCallback::JavaProxy::~JavaProxy() = default;

void AccountCreationInfoCallback::JavaProxy::onCallback(const std::experimental::optional<::ledger::core::api::AccountCreationInfo> & c_result, const std::experimental::optional<::ledger::core::api::Error> & c_error) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::AccountCreationInfoCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onCallback,
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::AccountCreationInfo>::fromCpp(jniEnv, c_result)),
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(jniEnv, c_error)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated