#pragma once

#include <mutex>
#include <vector>
#include <string>

namespace ledger {
    namespace core {
        namespace keychain {
            enum KeyPurpose {
                RECEIVE, CHANGE
            };
        }

        class Keychain {
        public:
            virtual ~Keychain() {};
            virtual uint32_t getNumberOfUsedAddresses() = 0;
            virtual std::vector<std::string> getAddresses(uint32_t startIndex, uint32_t count) = 0;
            virtual void markAsUsed(const std::string& address) = 0;
        };

        /// A keychain registry, aggregating information about keychains and giving access to
        /// all addresses.
        struct KeychainRegistry {
            virtual ~KeychainRegistry() {}

            /// Check that this registry contains the 
            virtual bool containsAddress(const std::string& address) = 0;
        };
    }
}
