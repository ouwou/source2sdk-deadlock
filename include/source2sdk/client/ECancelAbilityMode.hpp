#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ECancelAbilityMode : std::uint32_t
    {
        ECancelAbilityMode_AbilityKey = 0x0,
        ECancelAbilityMode_CancelKey = 0x1,
        ECancelAbilityMode_Either = 0x2,
        ECancelAbilityModeMaxValue = 0x2,
    };
};
