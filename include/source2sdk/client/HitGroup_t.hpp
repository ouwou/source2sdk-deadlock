#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 21
    // Alignment: 4
    // Size: 0x4
    enum class HitGroup_t : std::uint32_t
    {
        HITGROUP_INVALID = 0xffffffff,
        HITGROUP_GENERIC = 0x0,
        HITGROUP_HEAD = 0x1,
        HITGROUP_CHEST = 0x2,
        HITGROUP_STOMACH = 0x3,
        HITGROUP_LEFTARM = 0x4,
        HITGROUP_RIGHTARM = 0x5,
        HITGROUP_LEFTLEG = 0x6,
        HITGROUP_RIGHTLEG = 0x7,
        HITGROUP_NECK = 0x8,
        HITGROUP_UNUSED = 0x9,
        HITGROUP_GEAR = 0xa,
        HITGROUP_SPECIAL = 0xb,
        HITGROUP_T2_BOSS_FRONT_LEFT_LEG_WEAKPOINT = 0xc,
        HITGROUP_T2_BOSS_FRONT_RIGHT_LEG_WEAKPOINT = 0xd,
        HITGROUP_T2_BOSS_REAR_LEFT_LEG_WEAKPOINT = 0xe,
        HITGROUP_T2_BOSS_REAR_RIGHT_LEG_WEAKPOINT = 0xf,
        HITGROUP_T2_BOSS_HEAD_WEAKPOINT = 0x10,
        HITGROUP_T2_BOSS_BACK_WEAKPOINT = 0x11,
        HITGROUP_DRONE_BOSS_DRONE_WEAKPOINT = 0x12,
        HITGROUP_COUNT = 0x13,
    };
};
