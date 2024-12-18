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
    enum class StatsUsageFlags_t : std::uint32_t
    {
        None = 0x0,
        // MPropertySuppressEnumerator
        IntrinsicallyProvidedInModifier = 0x1,
        // MPropertyFriendlyName "Provided in ability code via MModifierFunction to caster"
        IntrinsicallyProvidedInAbility = 0x2,
        // MPropertyFriendlyName "Has some condition to be applied (Close Range, High Health Pct, "
        ConditionallyApplied = 0x4,
    };
};
