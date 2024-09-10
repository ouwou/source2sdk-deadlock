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
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x2c
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct GlitchSettings_t
    {
    public:
        float m_flStrength; // 0x0        
        int32_t m_nQuantizeType; // 0x4        
        float m_flQuantizeScale; // 0x8        
        float m_flQuantizeStrength; // 0xc        
        float m_flFrameRate; // 0x10        
        float m_flSpeed; // 0x14        
        float m_flJumpStrength; // 0x18        
        float m_flDistortStrength; // 0x1c        
        float m_flWhiteNoiseStrength; // 0x20        
        float m_flScanlineStrength; // 0x24        
        float m_flBreakupStrength; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(GlitchSettings_t, m_flStrength) == 0x0);
    static_assert(offsetof(GlitchSettings_t, m_nQuantizeType) == 0x4);
    static_assert(offsetof(GlitchSettings_t, m_flQuantizeScale) == 0x8);
    static_assert(offsetof(GlitchSettings_t, m_flQuantizeStrength) == 0xc);
    static_assert(offsetof(GlitchSettings_t, m_flFrameRate) == 0x10);
    static_assert(offsetof(GlitchSettings_t, m_flSpeed) == 0x14);
    static_assert(offsetof(GlitchSettings_t, m_flJumpStrength) == 0x18);
    static_assert(offsetof(GlitchSettings_t, m_flDistortStrength) == 0x1c);
    static_assert(offsetof(GlitchSettings_t, m_flWhiteNoiseStrength) == 0x20);
    static_assert(offsetof(GlitchSettings_t, m_flScanlineStrength) == 0x24);
    static_assert(offsetof(GlitchSettings_t, m_flBreakupStrength) == 0x28);
    
    static_assert(sizeof(GlitchSettings_t) == 0x2c);
};
