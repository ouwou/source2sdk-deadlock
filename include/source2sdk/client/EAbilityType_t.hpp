#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 1
    // Size: 0x1
    enum class EAbilityType_t : std::uint8_t
    {
        EAbilityType_Invalid = 255,
        EAbilityType_Weapon = 0,
        EAbilityType_Signature = 1,
        EAbilityType_Ultimate = 2,
        EAbilityType_Item = 3,
        EAbilityType_Innate = 4,
    };
};
