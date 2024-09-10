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
    enum class CBaseNPCMaker__ThreeStateDist_t : std::uint32_t
    {
        TS_DIST_NEAREST = 0x0,
        TS_DIST_FARTHEST = 0x1,
        TS_DIST_DONT_CARE = 0x2,
    };
};
