#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class DevTriggerType_t : std::uint32_t
    {
        Invalid = 0x0,
        SpawnIdol = 0x1,
        SpawnNeutrals = 0x2,
    };
};
