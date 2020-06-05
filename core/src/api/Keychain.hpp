// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_KEYCHAIN_HPP
#define DJINNI_GENERATED_KEYCHAIN_HPP

#include <string>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

/**
 * Keychain abstraction.
 *
 * A keychain can be seen as an address database that can be queried to get lists of addresses,
 * ask whether an address is contained, or generate new addresses.
 */
class LIBCORE_EXPORT Keychain {
public:
    virtual ~Keychain() {}

    /** Check whether an address is contained. */
    virtual bool contains(const std::string & address) const = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_KEYCHAIN_HPP