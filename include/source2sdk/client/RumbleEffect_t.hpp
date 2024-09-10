#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 27
    // Alignment: 4
    // Size: 0x4
    enum class RumbleEffect_t : std::uint32_t
    {
        RUMBLE_INVALID = 0xffffffff,
        // MPropertySuppressEnumerator
        RUMBLE_STOP_ALL = 0x0,
        RUMBLE_PISTOL = 0x1,
        RUMBLE_357 = 0x2,
        RUMBLE_SMG1 = 0x3,
        RUMBLE_AR2 = 0x4,
        RUMBLE_SHOTGUN_SINGLE = 0x5,
        RUMBLE_SHOTGUN_DOUBLE = 0x6,
        RUMBLE_AR2_ALT_FIRE = 0x7,
        RUMBLE_RPG_MISSILE = 0x8,
        RUMBLE_CROWBAR_SWING = 0x9,
        RUMBLE_AIRBOAT_GUN = 0xa,
        RUMBLE_JEEP_ENGINE_LOOP = 0xb,
        RUMBLE_FLAT_LEFT = 0xc,
        RUMBLE_FLAT_RIGHT = 0xd,
        RUMBLE_FLAT_BOTH = 0xe,
        RUMBLE_DMG_LOW = 0xf,
        RUMBLE_DMG_MED = 0x10,
        RUMBLE_DMG_HIGH = 0x11,
        RUMBLE_FALL_LONG = 0x12,
        RUMBLE_FALL_SHORT = 0x13,
        RUMBLE_PHYSCANNON_OPEN = 0x14,
        RUMBLE_PHYSCANNON_PUNT = 0x15,
        RUMBLE_PHYSCANNON_LOW = 0x16,
        RUMBLE_PHYSCANNON_MEDIUM = 0x17,
        RUMBLE_PHYSCANNON_HIGH = 0x18,
        // MPropertySuppressEnumerator
        NUM_RUMBLE_EFFECTS = 0x19,
    };
};
