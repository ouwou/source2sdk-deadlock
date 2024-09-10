#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class EAbilityMoveExecuteType_t : std::uint8_t
    {
        EMoveExecute_TryPlayerMove = 0,
        EMoveExecute_FullWalkMove = 1,
        EMoveExecute_NoclipMove = 2,
        EMoveExecute_FlyMove = 3,
    };
};
