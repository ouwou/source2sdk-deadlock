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
    struct FootSweepPusher_t
    {
    public:
        Vector m_vC; // 0x0        
        float m_flR; // 0xc        
        bool m_bIsForward; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FootSweepPusher_t, m_vC) == 0x0);
    static_assert(offsetof(FootSweepPusher_t, m_flR) == 0xc);
    static_assert(offsetof(FootSweepPusher_t, m_bIsForward) == 0x10);
    
    static_assert(sizeof(FootSweepPusher_t) == 0x14);
};
