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
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_ProxTester
    {
    public:
        float m_distSq; // 0x0        
        bool m_fInside; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x05[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_ProxTester, m_distSq) == 0x0);
    static_assert(offsetof(CAI_ProxTester, m_fInside) == 0x4);
    
    static_assert(sizeof(CAI_ProxTester) == 0x8);
};
