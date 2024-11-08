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
    enum class EDevBanReason : std::uint32_t
    {
        k_eDevBanReason_Unspecified = 0x0,
        k_eDevBanReason_AimAssist = 0x1,
        k_eDevBanReason_VisionAssist = 0x2,
        k_eDevBanReason_MovementAssist = 0x3,
    };
};
