#pragma once
#include "source2sdk/animlib/CNmTask.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x38
    // Has VTable
    #pragma pack(push, 1)
    class CNmCachedPoseReadTask : public animlib::CNmTask
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x30[0x8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNmCachedPoseReadTask) == 0x38);
};
