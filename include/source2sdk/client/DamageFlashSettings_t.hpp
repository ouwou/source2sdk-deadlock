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
    // Size: 0x18
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct DamageFlashSettings_t
    {
    public:
        float m_flDuration; // 0x0        
        float m_flCoverage; // 0x4        
        float m_flHardness; // 0x8        
        float m_flBrightness; // 0xc        
        float m_flBrightnessInLightSensitivityMode; // 0x10        
        Color m_Color; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DamageFlashSettings_t, m_flDuration) == 0x0);
    static_assert(offsetof(DamageFlashSettings_t, m_flCoverage) == 0x4);
    static_assert(offsetof(DamageFlashSettings_t, m_flHardness) == 0x8);
    static_assert(offsetof(DamageFlashSettings_t, m_flBrightness) == 0xc);
    static_assert(offsetof(DamageFlashSettings_t, m_flBrightnessInLightSensitivityMode) == 0x10);
    static_assert(offsetof(DamageFlashSettings_t, m_Color) == 0x14);
    
    static_assert(sizeof(DamageFlashSettings_t) == 0x18);
};
