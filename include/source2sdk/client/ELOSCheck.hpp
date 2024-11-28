#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class ELOSCheck : std::uint32_t
    {
        ELOSCheck_None = 0x0,
        ELOSCheck_Head = 0x1,
        ELOSCheck_Head_IgnoreObscureBlockers = 0x2,
        ELOSCheck_BodyCenter = 0x3,
        ELOSCheck_BodyCenter_IgnoreObscureBlockers = 0x4,
        ELOSCheck_Bounds = 0x5,
        ELOSCheck_Bounds_IgnoreObscureBlockers = 0x6,
        ELOSCheck_FibonacciSphere = 0x7,
    };
};
