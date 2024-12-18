#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AggregateInstanceStreamOnDiskData_t
    {
    public:
        uint32_t m_DecodedSize; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlBinaryBlock m_BufferData; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AggregateInstanceStreamOnDiskData_t, m_DecodedSize) == 0x0);
    static_assert(offsetof(AggregateInstanceStreamOnDiskData_t, m_BufferData) == 0x8);
    
    static_assert(sizeof(AggregateInstanceStreamOnDiskData_t) == 0x20);
};
