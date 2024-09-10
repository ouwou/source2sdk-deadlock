#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class NPCStatusEffectPriority_t : std::uint32_t
    {
        // MPropertyFriendlyName "Not used"
        STATUS_PRIORITY_NOT_USED = 0x0,
        // MPropertyFriendlyName "Low"
        STATUS_PRIORITY_LOW = 0x1,
        // MPropertyFriendlyName "Medium"
        STATUS_PRIORITY_MEDIUM = 0x2,
        // MPropertyFriendlyName "High"
        STATUS_PRIORITY_HIGH = 0x3,
        // MPropertyFriendlyName "Highest"
        STATUS_PRIORITY_HIGHEST = 0x4,
    };
};
