#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelRegionMode : std::uint32_t
    {
        k_ECitadelRegionMode_ROW = 0x0,
        k_ECitadelRegionMode_Europe = 0x1,
        k_ECitadelRegionMode_SEAsia = 0x2,
        k_ECitadelRegionMode_SAmerica = 0x3,
        k_ECitadelRegionMode_Russia = 0x4,
        k_ECitadelRegionMode_Oceania = 0x5,
    };
};
