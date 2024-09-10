#pragma once
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
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CNmStateNode__TimedEvent_t
    {
    public:
        CGlobalSymbol m_ID; // 0x0        
        float m_flTimeValueSeconds; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmStateNode__TimedEvent_t, m_ID) == 0x0);
    static_assert(offsetof(CNmStateNode__TimedEvent_t, m_flTimeValueSeconds) == 0x8);
    
    static_assert(sizeof(CNmStateNode__TimedEvent_t) == 0x10);
};
