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
    enum class EPlayerPlayState : std::uint32_t
    {
        EPlayerStateInvalid = 0xffffffff,
        EPlayerActive = 0x0,
        EPlayerAwaitingHeroAssignment = 0x1,
        EPlayerChoosingHero = 0x2,
        EPlayerPlayStateCount = 0x3,
    };
};
