#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    enum class AI_MotorGroundAnimGraph_StateType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Idle"
        eIdle = 0x0,
        // MPropertyFriendlyName "Idle Turn"
        eIdleTurn = 0x1,
        // MPropertyFriendlyName "Start"
        eStart = 0x2,
        // MPropertyFriendlyName "Loop"
        eLoop = 0x3,
        // MPropertyFriendlyName "Stop"
        eStop = 0x4,
        // MPropertyFriendlyName "Instant Stop"
        eInstantStop = 0x5,
        // MPropertyFriendlyName "Hop"
        eHop = 0x6,
        // MPropertyFriendlyName "Loop Performance"
        eLoopPerformance = 0x7,
        // MPropertyFriendlyName "Planted Turn"
        ePlantedTurn = 0x8,
        // MPropertyFriendlyName "Other"
        eOther = 0x9,
        eAny = 0xa,
        eCount = 0xa,
    };
};
