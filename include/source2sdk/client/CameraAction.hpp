#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class CameraAction : std::uint32_t
    {
        k_EAction_AddOp = 0x0,
        k_EAction_ClearAllOps = 0x1,
        k_EAction_ClearOpsForContext = 0x2,
    };
};
