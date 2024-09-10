#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 11
    // Alignment: 2
    // Size: 0x2
    enum class EShopFilters_t : std::uint16_t
    {
        // MPropertyFriendlyName "None"
        EShopFilterNone = 0x0,
        // MPropertyFriendlyName "Weapon Damage"
        EShopFilterWeaponDamage = 0x1,
        // MPropertyFriendlyName "Magic Damage"
        EShopFilterMagicDamage = 0x2,
        // MPropertyFriendlyName "Durability"
        EShopFilterDurability = 0x4,
        // MPropertyFriendlyName "Fire Rate"
        EShopFilterFireRate = 0x8,
        // MPropertyFriendlyName "Clip Size"
        EShopFilterClipSize = 0x10,
        // MPropertyFriendlyName "Melee"
        EShopFilterMelee = 0x20,
        // MPropertyFriendlyName "Healing"
        EShopFilterHealing = 0x40,
        // MPropertyFriendlyName "Movement"
        EShopFilterMovement = 0x80,
        // MPropertyFriendlyName "Disruption"
        EShopFilterDisruption = 0x100,
        // MPropertyFriendlyName "MAX"
        EShopFilterMax = 0x200,
    };
};
