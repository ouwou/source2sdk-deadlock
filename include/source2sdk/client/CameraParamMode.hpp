#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class CameraParamMode : std::uint32_t
    {
        k_EParamMode_AllowInOneContext = 0x0,
        k_EParamMode_AllowInMultipleContexts = 0x1,
    };
};
