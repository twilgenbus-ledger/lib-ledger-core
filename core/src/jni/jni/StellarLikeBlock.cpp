// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from stellar_like_wallet.djinni

#include "StellarLikeBlock.hpp"  // my header

namespace djinni_generated {

StellarLikeBlock::StellarLikeBlock() : ::djinni::JniInterface<::ledger::core::api::StellarLikeBlock, StellarLikeBlock>("co/ledger/core/StellarLikeBlock$CppProxy") {}

StellarLikeBlock::~StellarLikeBlock() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_StellarLikeBlock_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::StellarLikeBlock>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
