#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Enumerator count: 18
    // Alignment: 4
    // Size: 0x4
    enum class ParticleAttachment_t : std::uint32_t
    {
        PATTACH_INVALID = 0xffffffff,
        PATTACH_ABSORIGIN = 0x0,
        PATTACH_ABSORIGIN_FOLLOW = 0x1,
        PATTACH_CUSTOMORIGIN = 0x2,
        PATTACH_CUSTOMORIGIN_FOLLOW = 0x3,
        PATTACH_POINT = 0x4,
        PATTACH_POINT_FOLLOW = 0x5,
        PATTACH_EYES_FOLLOW = 0x6,
        PATTACH_OVERHEAD_FOLLOW = 0x7,
        PATTACH_WORLDORIGIN = 0x8,
        PATTACH_ROOTBONE_FOLLOW = 0x9,
        PATTACH_RENDERORIGIN_FOLLOW = 0xa,
        PATTACH_MAIN_VIEW = 0xb,
        PATTACH_WATERWAKE = 0xc,
        PATTACH_CENTER_FOLLOW = 0xd,
        PATTACH_CUSTOM_GAME_STATE_1 = 0xe,
        PATTACH_HEALTHBAR = 0xf,
        MAX_PATTACH_TYPES = 0x10,
    };
};
