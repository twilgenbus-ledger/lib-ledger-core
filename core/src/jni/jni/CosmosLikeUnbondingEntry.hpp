// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEUNBONDINGENTRY_HPP_JNI_
#define DJINNI_GENERATED_COSMOSLIKEUNBONDINGENTRY_HPP_JNI_

#include "../../api/CosmosLikeUnbondingEntry.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class CosmosLikeUnbondingEntry final : ::djinni::JniInterface<::ledger::core::api::CosmosLikeUnbondingEntry, CosmosLikeUnbondingEntry> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::CosmosLikeUnbondingEntry>;
    using CppOptType = std::shared_ptr<::ledger::core::api::CosmosLikeUnbondingEntry>;
    using JniType = jobject;

    using Boxed = CosmosLikeUnbondingEntry;

    ~CosmosLikeUnbondingEntry();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<CosmosLikeUnbondingEntry>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<CosmosLikeUnbondingEntry>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    CosmosLikeUnbondingEntry();
    friend ::djinni::JniClass<CosmosLikeUnbondingEntry>;
    friend ::djinni::JniInterface<::ledger::core::api::CosmosLikeUnbondingEntry, CosmosLikeUnbondingEntry>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_COSMOSLIKEUNBONDINGENTRY_HPP_JNI_