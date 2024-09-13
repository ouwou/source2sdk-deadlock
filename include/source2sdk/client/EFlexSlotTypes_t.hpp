#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 2
    // Size: 0x2
    enum class EFlexSlotTypes_t : std::uint16_t
    {
        // MPropertyFriendlyName "Invalid"
        EFlexSlot_Invalid = 0x0,
        // MPropertyFriendlyName "Kill 2 Tier 2"
        EFlexSlot_Kill2Tier2 = 0x1,
        // MPropertyFriendlyName "All Tier 1"
        EFlexSlot_AllTier1 = 0x2,
        // MPropertyFriendlyName "Generator"
        EFlexSlot_Generator = 0x4,
        // MPropertyFriendlyName "All Tier 2"
        EFlexSlot_AllTier2 = 0x8,
    };
};
