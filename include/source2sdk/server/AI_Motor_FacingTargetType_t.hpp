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
    enum class AI_Motor_FacingTargetType_t : std::uint32_t
    {
        eInvalid = 0xffffffff,
        eMotor = 0x0,
        eChoreo = 0x1,
        eSmartGoal = 0x2,
        eSchedule = 0x3,
        eCount = 0x4,
    };
};
