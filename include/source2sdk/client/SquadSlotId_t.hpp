#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 11
    // Alignment: 4
    // Size: 0x4
    enum class SquadSlotId_t : std::uint32_t
    {
        SQUAD_SLOT_NONE = 0xffffffff,
        SQUAD_SLOT_ATTACK1 = 0x0,
        SQUAD_SLOT_ATTACK2 = 0x1,
        SQUAD_SLOT_ATTACK3 = 0x2,
        SQUAD_SLOT_INVESTIGATE_SOUND = 0x3,
        SQUAD_SLOT_EXCLUSIVE_HANDSIGN = 0x4,
        SQUAD_SLOT_EXCLUSIVE_RELOAD = 0x5,
        SQUAD_SLOT_SPECIAL_ATTACK = 0x6,
        SQUAD_SLOT_ADVANCE_ON_ENEMY = 0x7,
        SQUAD_SLOT_THROW_GRENADE = 0x8,
        // MPropertySuppressEnumerator
        SQUAD_SLOT_COUNT = 0x9,
    };
};
