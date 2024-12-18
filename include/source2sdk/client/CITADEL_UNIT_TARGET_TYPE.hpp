#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 34
    // Alignment: 4
    // Size: 0x4
    // 
    // metadata: MEnumFlagsWithOverlappingBits
    enum class CITADEL_UNIT_TARGET_TYPE : std::uint32_t
    {
        CITADEL_UNIT_TARGET_NONE = 0x0,
        CITADEL_UNIT_TARGET_HERO_FRIENDLY = 0x1,
        CITADEL_UNIT_TARGET_TROOPER_FRIENDLY = 0x2,
        CITADEL_UNIT_TARGET_BOSS_FRIENDLY = 0x4,
        CITADEL_UNIT_TARGET_BUILDING_FRIENDLY = 0x8,
        CITADEL_UNIT_TARGET_PROP_FRIENDLY = 0x10,
        CITADEL_UNIT_TARGET_MINION_FRIENDLY = 0x20,
        CITADEL_UNIT_TARGET_GOLD_ORBS_FRIENDLY = 0x40,
        CITADEL_UNIT_TARGET_TROPHY_FRIENDLY = 0x80,
        CITADEL_UNIT_TARGET_HERO_ENEMY = 0x100,
        CITADEL_UNIT_TARGET_TROOPER_ENEMY = 0x200,
        CITADEL_UNIT_TARGET_BOSS_ENEMY = 0x400,
        CITADEL_UNIT_TARGET_BUILDING_ENEMY = 0x800,
        CITADEL_UNIT_TARGET_PROP_ENEMY = 0x1000,
        CITADEL_UNIT_TARGET_MINION_ENEMY = 0x2000,
        CITADEL_UNIT_TARGET_GOLD_ORBS_ENEMY = 0x4000,
        CITADEL_UNIT_TARGET_TROPHY_ENEMY = 0x8000,
        CITADEL_UNIT_TARGET_NEUTRAL = 0x10000,
        CITADEL_UNIT_TARGET_ZIPLINE = 0x20000,
        CITADEL_UNIT_TARGET_BREAKABLE_PROP = 0x40000,
        CITADEL_UNIT_TARGET_ABILLITY_TRIGGER = 0x80000,
        CITADEL_UNIT_TARGET_HERO = 0x101,
        CITADEL_UNIT_TARGET_CREEP_FRIENDLY = 0x6,
        CITADEL_UNIT_TARGET_CREEP_ENEMY = 0x10600,
        CITADEL_UNIT_TARGET_CREEP = 0x10606,
        CITADEL_UNIT_TARGET_BOSS = 0x404,
        CITADEL_UNIT_TARGET_BUILDING = 0x808,
        CITADEL_UNIT_TARGET_PROP = 0x1010,
        CITADEL_UNIT_TARGET_MINION = 0x2020,
        CITADEL_UNIT_TARGET_GOLD_ORBS = 0x4040,
        CITADEL_UNIT_TARGET_TROPHY = 0x8080,
        CITADEL_UNIT_TARGET_ALL_FRIENDLY = 0x3f,
        CITADEL_UNIT_TARGET_ALL_ENEMY = 0x13f00,
        CITADEL_UNIT_TARGET_ALL = 0x13f3f,
    };
};
