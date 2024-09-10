#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class EViscousChargedGunState : std::uint32_t
    {
        EViscousChargedGunState_Idle = 0x0,
        EViscousChargedGunState_Charging = 0x1,
        EViscousChargedGunState_Shoot = 0x2,
    };
};
