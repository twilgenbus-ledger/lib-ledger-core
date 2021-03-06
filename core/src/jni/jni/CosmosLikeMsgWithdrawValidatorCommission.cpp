// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#include "CosmosLikeMsgWithdrawValidatorCommission.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

CosmosLikeMsgWithdrawValidatorCommission::CosmosLikeMsgWithdrawValidatorCommission() = default;

CosmosLikeMsgWithdrawValidatorCommission::~CosmosLikeMsgWithdrawValidatorCommission() = default;

auto CosmosLikeMsgWithdrawValidatorCommission::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<CosmosLikeMsgWithdrawValidatorCommission>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.validatorAddress)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto CosmosLikeMsgWithdrawValidatorCommission::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<CosmosLikeMsgWithdrawValidatorCommission>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_validatorAddress))};
}

}  // namespace djinni_generated
