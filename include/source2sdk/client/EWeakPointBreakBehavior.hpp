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
    enum class EWeakPointBreakBehavior : std::uint32_t
    {
        EBreakOnceBecomeInvuln = 0x0,
        EBreakOnceRemainDamagable = 0x1,
        EBreakMultipleTimes = 0x2,
        EBreakNever = 0x3,
        EBreakOnceHideBodygroup = 0x4,
    };
};
