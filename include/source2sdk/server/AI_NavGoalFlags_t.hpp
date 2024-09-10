#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class AI_NavGoalFlags_t : std::uint32_t
    {
        eYawToDest = 0x1,
        eDisableUpdateGoalPos = 0x2,
        eLocalSucceedOnWithinTolerance = 0x4,
        eGoalOffsetInLocalYaw = 0x8,
        eGoalOffsetInLocalSpace = 0x10,
        eDestInWorldSpace = 0x20,
        eDontLimitGoalOffset = 0x40,
        eInterruptPath = 0x80,
        eDisablePathSmoothing = 0x100,
        eClearGoalOffsetOnRepathForMovement = 0x200,
        eUseTargetPredictedPosition = 0x400,
        eDisableTargetPredictedPositionForDynamicPathing = 0x800,
        // MEnumeratorIsNotAFlag
        eDefault = 0x0,
    };
};
