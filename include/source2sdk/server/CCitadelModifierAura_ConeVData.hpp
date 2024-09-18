#pragma once
#include "source2sdk/server/CCitadelModifierAuraVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x650
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifierAura_ConeVData : public server::CCitadelModifierAuraVData
    {
    public:
        float m_flAuraTargetingConeHalfWidth; // 0x648        
        float m_flAuraTargetingConeAngle; // 0x64c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierAura_ConeVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifierAura_ConeVData) == 0x650);
};
