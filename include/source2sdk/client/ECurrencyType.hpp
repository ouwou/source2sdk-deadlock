#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class ECurrencyType : std::uint32_t
    {
        ECurrencyInvalid = 0xffffffff,
        EGold = 0x0,
        EAbilityPoints = 0x1,
        EAbilityUnlocks = 0x2,
        EDeathPenaltyGold = 0x3,
        // MPropertySuppressEnumerator
        ECurrencyCount = 0x4,
    };
};
