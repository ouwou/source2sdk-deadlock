#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 1
    // Size: 0x1
    enum class UnitFilterResult : std::uint8_t
    {
        UF_SUCCESS = 0,
        UF_FAIL_INVALID_LOCATION = 1,
        UF_FAIL_INVALID_TEAM = 2,
        UF_FAIL_INVALID_TYPE = 3,
        UF_FAIL_INVALID_ENTITY = 4,
        UF_FAIL_INVALID_FLAGS = 5,
    };
};
