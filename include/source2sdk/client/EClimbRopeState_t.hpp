#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class EClimbRopeState_t : std::uint32_t
    {
        ERopeClimb_None = 0x0,
        ERopeClimb_Latching = 0x1,
        ERopeClimb_Attached = 0x2,
        ERopeClimb_Count = 0x3,
    };
};
