#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 27
    // Alignment: 2
    // Size: 0x2
    enum class EAbilitySlots_t : std::uint16_t
    {
        ESlot_Invalid = 0xffff,
        ESlot_Signature_First = 0x0,
        ESlot_Signature_1 = 0x0,
        ESlot_Signature_2 = 0x1,
        ESlot_Signature_3 = 0x2,
        ESlot_Signature_4 = 0x3,
        ESlot_ActiveItem_First = 0x4,
        ESlot_ActiveItem_1 = 0x4,
        ESlot_ActiveItem_2 = 0x5,
        ESlot_ActiveItem_3 = 0x6,
        ESlot_ActiveItem_4 = 0x7,
        ESlot_Ability_Held = 0x8,
        ESlot_Ability_ZipLine = 0x9,
        ESlot_Ability_Mantle = 0xa,
        ESlot_Ability_ClimbRope = 0xb,
        ESlot_Ability_Jump = 0xc,
        ESlot_Ability_Slide = 0xd,
        ESlot_Ability_Teleport = 0xe,
        ESlot_Ability_ZipLineBoost = 0xf,
        ESlot_Ability_Innate_1 = 0x10,
        ESlot_Ability_Innate_2 = 0x11,
        ESlot_Ability_Innate_3 = 0x12,
        ESlot_Weapon_Secondary = 0x13,
        ESlot_Weapon_Primary = 0x14,
        ESlot_Weapon_Melee = 0x15,
        ESlot_None = 0x16,
        EMaxAbilitySlots = 0x16,
    };
};
