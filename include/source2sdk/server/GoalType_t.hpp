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
    enum class GoalType_t : std::uint32_t
    {
        GOALTYPE_NONE = 0x0,
        GOALTYPE_ENTITY = 0x1,
        GOALTYPE_PATHCORNER = 0x2,
        GOALTYPE_LOCATION = 0x3,
        GOALTYPE_COVER = 0x4,
        GOALTYPE_LOS = 0x5,
        GOALTYPE_INVALID = 0x6,
    };
};
