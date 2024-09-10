#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 1
    // Size: 0x1
    enum class EItemSlotTypes_t : std::uint8_t
    {
        // MPropertyFriendlyName "Invalid"
        EItemSlotType_Invalid = 255,
        // MPropertyFriendlyName "Weapon"
        EItemSlotType_WeaponMod = 0,
        // MPropertyFriendlyName "Armor"
        EItemSlotType_Armor = 1,
        // MPropertyFriendlyName "Tech"
        EItemSlotType_Tech = 2,
        // MPropertyFriendlyName "Universal"
        // MPropertySuppressEnumerator
        EItemSlotType_Universal = 3,
        // MPropertyFriendlyName "Locked Universal"
        // MPropertySuppressEnumerator
        EItemSlotType_UniversalLocked = 4,
        // MPropertyFriendlyName "All"
        // MPropertySuppressEnumerator
        EItemSlotType_All = 5,
        // MPropertyFriendlyName "Favorites"
        // MPropertySuppressEnumerator
        EItemSlotType_Favorites = 6,
        // MPropertySuppressEnumerator
        EMaxItemSlotTypes = 7,
    };
};
