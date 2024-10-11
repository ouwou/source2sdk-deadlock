#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class AI_MotorGroundAnimGraph_Flags_t : std::uint32_t
    {
        eNone = 0x0,
        eDelayStop = 0x1,
        eWaitingForFacing = 0x2,
    };
};
