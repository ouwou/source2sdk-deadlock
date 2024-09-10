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
    // Size: 0x14
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CPathfindRandomData
    {
    public:
        Vector m_vCenter; // 0x0        
        float m_flMinRadius; // 0xc        
        float m_flMaxRadius; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPathfindRandomData, m_vCenter) == 0x0);
    static_assert(offsetof(CPathfindRandomData, m_flMinRadius) == 0xc);
    static_assert(offsetof(CPathfindRandomData, m_flMaxRadius) == 0x10);
    
    static_assert(sizeof(CPathfindRandomData) == 0x14);
};
