#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class EDamageFlashType : std::uint32_t
    {
        EFlashType_BulletDamage = 0x0,
        EFlashType_TechDamage = 0x1,
        EFlashType_Healing = 0x2,
        EFlashType_CritDamage = 0x3,
        EFlashType_MeleeActivate = 0x4,
        // MPropertySuppressEnumerator
        EFlshTypeCount = 0x5,
    };
};
