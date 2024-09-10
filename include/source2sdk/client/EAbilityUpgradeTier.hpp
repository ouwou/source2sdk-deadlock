#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 1
    // Size: 0x1
    enum class EAbilityUpgradeTier : std::uint8_t
    {
        EAbilityUpgradeTier_Invalid = 0,
        EAbilityUpgradeTier_1 = 1,
        EAbilityUpgradeTier_2 = 2,
        EAbilityUpgradeTier_3 = 3,
        // MPropertySuppressEnumerator
        EMaxAbilityUpgradeTier = 4,
    };
};
