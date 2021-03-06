// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#include "CosmosLikeMsgBeginRedelegate.hpp"  // my header
#include "CosmosLikeAmount.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

CosmosLikeMsgBeginRedelegate::CosmosLikeMsgBeginRedelegate() = default;

CosmosLikeMsgBeginRedelegate::~CosmosLikeMsgBeginRedelegate() = default;

auto CosmosLikeMsgBeginRedelegate::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<CosmosLikeMsgBeginRedelegate>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.delegatorAddress)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.validatorSourceAddress)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.validatorDestinationAddress)),
                                                           ::djinni::get(::djinni_generated::CosmosLikeAmount::fromCpp(jniEnv, c.amount)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto CosmosLikeMsgBeginRedelegate::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 5);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<CosmosLikeMsgBeginRedelegate>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_delegatorAddress)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_validatorSourceAddress)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_validatorDestinationAddress)),
            ::djinni_generated::CosmosLikeAmount::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_amount))};
}

}  // namespace djinni_generated
