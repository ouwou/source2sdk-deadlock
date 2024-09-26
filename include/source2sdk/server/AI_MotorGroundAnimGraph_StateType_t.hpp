#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class AI_MotorGroundAnimGraph_StateType_t : std::uint32_t
    {
        eIdle = 0x0,
        eIdleTurn = 0x1,
        eStart = 0x2,
        eLoop = 0x3,
        eStop = 0x4,
        eAny = 0x5,
    };
};
