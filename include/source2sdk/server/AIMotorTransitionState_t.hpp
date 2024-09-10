#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class AIMotorTransitionState_t : std::uint32_t
    {
        eNone = 0x0,
        eFacingNotStarted = 0x1,
        eFacingStarted = 0x2,
        eFacingSuccessful = 0x3,
        eExecuting = 0x4,
    };
};
