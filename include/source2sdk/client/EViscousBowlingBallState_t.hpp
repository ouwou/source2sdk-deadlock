#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class EViscousBowlingBallState_t : std::uint8_t
    {
        EViscousBowlingBallState_None = 0,
        EViscousBowlingBallState_TransformToBall = 1,
        EViscousBowlingBallState_Rolling = 2,
        EViscousBowlingBallState_TransformFromBall = 3,
    };
};
