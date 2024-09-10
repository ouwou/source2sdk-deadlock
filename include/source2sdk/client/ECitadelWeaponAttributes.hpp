#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 10
    // Alignment: 2
    // Size: 0x2
    enum class ECitadelWeaponAttributes : std::uint16_t
    {
        // MPropertyFriendlyName "None"
        EWeaponAttribute_None = 0x0,
        // MPropertyFriendlyName "Rapid Fire"
        EWeaponAttribute_RapidFire = 0x1,
        // MPropertyFriendlyName "Burst Fire"
        EWeaponAttribute_BurstFire = 0x2,
        // MPropertyFriendlyName "Spreadshot"
        EWeaponAttribute_Spreadshot = 0x4,
        // MPropertyFriendlyName "Beam Weapon"
        EWeaponAttribute_BeamWeapon = 0x8,
        // MPropertyFriendlyName "Close Range"
        EWeaponAttribute_CloseRange = 0x10,
        // MPropertyFriendlyName "Medium Range"
        EWeaponAttribute_MediumRange = 0x20,
        // MPropertyFriendlyName "Long Range"
        EWeaponAttribute_LongRange = 0x40,
        // MPropertyFriendlyName "Heavy Hitter"
        EWeaponAttribute_HeavyHitter = 0x80,
        // MPropertyFriendlyName "Projectile"
        EWeaponAttribute_Projectile = 0x100,
    };
};
