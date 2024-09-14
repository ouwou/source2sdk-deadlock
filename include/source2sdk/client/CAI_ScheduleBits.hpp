#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x24
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_ScheduleBits
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x24];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CAI_ScheduleBits) == 0x24);
};
