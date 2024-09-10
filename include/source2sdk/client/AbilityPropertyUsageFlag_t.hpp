#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class AbilityPropertyUsageFlag_t : std::uint32_t
    {
        APUsageFlag_NONE = 0x0,
        // MPropertyFriendlyName "Provided in intrinsic modifier to caster"
        APUsageFlag_ModifierIntrinsic = 0x1,
        // MPropertyFriendlyName "Provided in non-intrinsic modifier"
        APUsageFlag_ModifierConditional = 0x2,
    };
};
