#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ECommendType : std::uint32_t
    {
        k_eInvalid = 0x0,
        k_eFriendly = 0x1,
        k_eTeamwork = 0x2,
        k_eSkilled = 0x3,
    };
};
