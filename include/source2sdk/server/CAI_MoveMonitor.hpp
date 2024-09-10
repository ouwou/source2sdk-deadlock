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
    // Size: 0x10
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_MoveMonitor
    {
    public:
        Vector m_vMark; // 0x0        
        float m_flMarkTolerance; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_MoveMonitor, m_vMark) == 0x0);
    static_assert(offsetof(CAI_MoveMonitor, m_flMarkTolerance) == 0xc);
    
    static_assert(sizeof(CAI_MoveMonitor) == 0x10);
};
