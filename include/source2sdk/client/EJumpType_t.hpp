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
    enum class EJumpType_t : std::uint8_t
    {
        EJumpType_Ground = 0,
        EJumpType_Air = 1,
        EJumpType_Wall = 2,
        EJumpType_DashJump = 3,
    };
};
