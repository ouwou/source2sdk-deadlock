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
    enum class EMeleeHold_AttackType : std::uint32_t
    {
        // MPropertySuppressEnumerator
        EAttackType_None = 0x0,
        EAttackType_Light = 0x1,
        EAttackType_Heavy = 0x2,
        EAttackType_HeavyAir = 0x3,
    };
};
