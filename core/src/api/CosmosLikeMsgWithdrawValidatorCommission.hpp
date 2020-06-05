// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEMSGWITHDRAWVALIDATORCOMMISSION_HPP
#define DJINNI_GENERATED_COSMOSLIKEMSGWITHDRAWVALIDATORCOMMISSION_HPP

#include <iostream>
#include <string>
#include <utility>

namespace ledger { namespace core { namespace api {

struct CosmosLikeMsgWithdrawValidatorCommission final {
    std::string validatorAddress;

    CosmosLikeMsgWithdrawValidatorCommission(std::string validatorAddress_)
    : validatorAddress(std::move(validatorAddress_))
    {}

    CosmosLikeMsgWithdrawValidatorCommission(const CosmosLikeMsgWithdrawValidatorCommission& cpy) {
       this->validatorAddress = cpy.validatorAddress;
    }

    CosmosLikeMsgWithdrawValidatorCommission() = default;


    CosmosLikeMsgWithdrawValidatorCommission& operator=(const CosmosLikeMsgWithdrawValidatorCommission& cpy) {
       this->validatorAddress = cpy.validatorAddress;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(validatorAddress);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(validatorAddress);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_COSMOSLIKEMSGWITHDRAWVALIDATORCOMMISSION_HPP