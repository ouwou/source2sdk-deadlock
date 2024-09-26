#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 41
    // Alignment: 8
    // Size: 0x8
    enum class InputBitMask_t : std::uint64_t
    {
        // MEnumeratorIsNotAFlag
        IN_NONE = 0x0,
        // MEnumeratorIsNotAFlag
        IN_ALL = 0xffffffffffffffff,
        IN_ATTACK = 0x1,
        IN_JUMP = 0x2,
        IN_DUCK = 0x4,
        IN_FORWARD = 0x8,
        IN_BACK = 0x10,
        IN_USE = 0x20,
        IN_TURNLEFT = 0x80,
        IN_TURNRIGHT = 0x100,
        IN_MOVELEFT = 0x200,
        IN_MOVERIGHT = 0x400,
        IN_ATTACK2 = 0x800,
        IN_RELOAD = 0x2000,
        IN_SPEED = 0x10000,
        IN_JOYAUTOSPRINT = 0x20000,
        // MEnumeratorIsNotAFlag
        IN_FIRST_MOD_SPECIFIC_BIT = 0x100000000,
        IN_WEAPON1 = 0x100000000,
        IN_ABILITY1 = 0x200000000,
        IN_ABILITY2 = 0x400000000,
        IN_ABILITY3 = 0x800000000,
        IN_ABILITY4 = 0x1000000000,
        IN_ITEM1 = 0x2000000000,
        IN_ITEM2 = 0x4000000000,
        IN_ITEM3 = 0x8000000000,
        IN_ITEM4 = 0x10000000000,
        IN_ITEM5 = 0x20000000000,
        IN_ABILITY_HELD = 0x40000000000,
        IN_INNATE_1 = 0x100000000000,
        IN_INNATE_2 = 0x200000000000,
        IN_INNATE_3 = 0x400000000000,
        IN_MANTLE = 0x1000000000000,
        IN_SPEC_NEXT = 0x2000000000000,
        IN_SPEC_PREV = 0x4000000000000,
        IN_SPEC_MODE = 0x8000000000000,
        IN_SPEC_TOGGLE_TEAM = 0x10000000000000,
        IN_ALT_CAST = 0x20000000000000,
        IN_REPLAY_DEATH = 0x40000000000000,
        IN_TELEPORT = 0x80000000000000,
        IN_CANCEL_ABILITY = 0x100000000000000,
        IN_ZIPLINE = 0x200000000000000,
    };
};
