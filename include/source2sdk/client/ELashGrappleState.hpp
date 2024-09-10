#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 1
    // Size: 0x1
    enum class ELashGrappleState : std::uint8_t
    {
        ELashGrappleState_None = 0,
        ELashGrappleState_LiftingUp = 1,
        ELashGrappleState_HangingInAir = 2,
    };
};
