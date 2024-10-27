#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: toolscene
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::toolscene
{
    // Registered alignment: 0x1
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x5
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CLightRigGrid
    {
    public:
        bool m_bEnabled; // 0x0        
        Color m_Color; // 0x1        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CLightRigGrid, m_bEnabled) == 0x0);
    static_assert(offsetof(CLightRigGrid, m_Color) == 0x1);
    
    static_assert(sizeof(CLightRigGrid) == 0x5);
};
