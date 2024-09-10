#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct AI_SchedLoadStatus_t
    {
    public:
        bool bValid; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x3]; // 0x1
        int32_t nSignature; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AI_SchedLoadStatus_t, bValid) == 0x0);
    static_assert(offsetof(AI_SchedLoadStatus_t, nSignature) == 0x4);
    
    static_assert(sizeof(AI_SchedLoadStatus_t) == 0x8);
};
