#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class EPointType : std::uint32_t
    {
        EPointType_MoveTarget = 0x0,
        EPointType_EnemyBot = 0x1,
        EPointType_EnemyTrooper = 0x2,
        EPointType_FriendlyBot = 0x3,
        EPointType_FriendlyTrooper = 0x4,
        EPointType_DamageZone = 0x5,
        EPointType_MovingEnemyBot = 0x6,
        EPointType_MeleeTrainer = 0x7,
    };
};
