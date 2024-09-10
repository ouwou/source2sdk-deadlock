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
    enum class ELockonState : std::uint32_t
    {
        ELockingOn = 0x0,
        ELosingLock = 0x1,
        ELockPaused = 0x2,
        ELockNone = 0x3,
    };
};
