#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 4
    // Size: 0x4
    enum class AI_BaseNPC_MovementHeading_t : std::uint32_t
    {
        // MPropertyFriendlyName "Forward"
        eForward = 0x0,
        // MPropertyFriendlyName "Forward-Right"
        eForwardRight = 0x1,
        // MPropertyFriendlyName "Right"
        eRight = 0x2,
        // MPropertyFriendlyName "Back-Right"
        eBackRight = 0x3,
        // MPropertyFriendlyName "Back"
        eBack = 0x4,
        // MPropertyFriendlyName "Back-Left"
        eBackLeft = 0x5,
        // MPropertyFriendlyName "Left"
        eLeft = 0x6,
        // MPropertyFriendlyName "Forward-Left"
        eForwardLeft = 0x7,
        eCount = 0x8,
    };
};
