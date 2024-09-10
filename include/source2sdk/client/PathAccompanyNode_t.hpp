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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x14
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct PathAccompanyNode_t
    {
    public:
        Vector m_vPosition; // 0x0        
        float m_flRadius; // 0xc        
        float m_flDistToNext; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PathAccompanyNode_t, m_vPosition) == 0x0);
    static_assert(offsetof(PathAccompanyNode_t, m_flRadius) == 0xc);
    static_assert(offsetof(PathAccompanyNode_t, m_flDistToNext) == 0x10);
    
    static_assert(sizeof(PathAccompanyNode_t) == 0x14);
};
