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
    enum class CameraOperation : std::uint32_t
    {
        k_ECameraOp_Maintain = 0x2,
        k_ECameraOp_Approach = 0x3,
        k_ECameraOp_Spring = 0x4,
        k_ECameraOp_Lerp = 0x5,
        k_ECameraOp_Lag = 0x6,
    };
};
