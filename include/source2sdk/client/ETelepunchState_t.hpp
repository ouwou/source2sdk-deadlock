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
    enum class ETelepunchState_t : std::uint8_t
    {
        ETelepunchState_None = 0,
        ETelepunchState_EnemyPortalTelegraph = 1,
        ETelepunchState_SelfPortalTelegraph = 2,
        ETelepunchState_Windup = 3,
        ETelepunchState_Attack = 4,
    };
};
