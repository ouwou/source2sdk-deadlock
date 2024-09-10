#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class CBaseNPCMaker__VisibilityCriterion_t : std::uint32_t
    {
        VC_YES_LOS = 0x0,
        VC_NO_LOS = 0x1,
        VC_DONT_CARE = 0x2,
        VC_YES_IN_VIEWCONE = 0x3,
        VC_NO_IN_VIEWCONE = 0x4,
        VC_YES_LOS_VIEWCONE = 0x5,
        VC_NO_LOS_VIEWCONE = 0x6,
    };
};
