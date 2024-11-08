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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x40
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmIKEffector
    {
    public:
        int32_t m_nBodyIndex; // 0x0        
        bool m_bEnabled; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x05[0x3]; // 0x5
        Vector m_vTargetPosition; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x14[0xc]; // 0x14
        Quaternion m_qTargetOrientation; // 0x20        
        float m_flWeight; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0xc];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmIKEffector, m_nBodyIndex) == 0x0);
    static_assert(offsetof(CNmIKEffector, m_bEnabled) == 0x4);
    static_assert(offsetof(CNmIKEffector, m_vTargetPosition) == 0x8);
    static_assert(offsetof(CNmIKEffector, m_qTargetOrientation) == 0x20);
    static_assert(offsetof(CNmIKEffector, m_flWeight) == 0x30);
    
    static_assert(sizeof(CNmIKEffector) == 0x40);
};
