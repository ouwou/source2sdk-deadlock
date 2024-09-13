#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 1
    // Size: 0x1
    enum class ECatStatueState_t : std::uint8_t
    {
        ECatStatue_None = 0,
        ECatStatue_Shoulder = 1,
        ECatStatue_ProjectileOut = 2,
        ECatStatue_InWorld = 3,
        ECatStatue_InCooldown = 4,
    };
};
