// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEOPERATION_HPP_JNI_
#define DJINNI_GENERATED_COSMOSLIKEOPERATION_HPP_JNI_

#include "../../api/CosmosLikeOperation.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class CosmosLikeOperation final : ::djinni::JniInterface<::ledger::core::api::CosmosLikeOperation, CosmosLikeOperation> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::CosmosLikeOperation>;
    using CppOptType = std::shared_ptr<::ledger::core::api::CosmosLikeOperation>;
    using JniType = jobject;

    using Boxed = CosmosLikeOperation;

    ~CosmosLikeOperation();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<CosmosLikeOperation>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<CosmosLikeOperation>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    CosmosLikeOperation();
    friend ::djinni::JniClass<CosmosLikeOperation>;
    friend ::djinni::JniInterface<::ledger::core::api::CosmosLikeOperation, CosmosLikeOperation>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_COSMOSLIKEOPERATION_HPP_JNI_
