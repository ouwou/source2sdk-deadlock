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
    enum class AI_BaseNPC_StopType_t : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        eNone = 0x0,
        // MPropertyFriendlyName "Moving"
        eMoving = 0x1,
        // MPropertyFriendlyName "Instant"
        eInstant = 0x2,
    };
};
