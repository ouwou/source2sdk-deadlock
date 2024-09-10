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
    enum class EMeleeHold_AttackState : std::uint32_t
    {
        EAttackState_None = 0x0,
        EAttackState_Charging = 0x1,
        EAttackState_GroundDashing = 0x2,
        EAttackState_AirDashing = 0x3,
        EAttackState_Attacking = 0x4,
    };
};
