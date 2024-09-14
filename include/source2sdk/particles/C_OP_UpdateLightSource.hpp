#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_UpdateLightSource : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "color tint"
        Color m_vColorTint; // 0x1c0        
        // metadata: MPropertyFriendlyName "amount to multiply light brightness by"
        float m_flBrightnessScale; // 0x1c4        
        // metadata: MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
        float m_flRadiusScale; // 0x1c8        
        // metadata: MPropertyFriendlyName "minimum radius for created lights"
        float m_flMinimumLightingRadius; // 0x1cc        
        // metadata: MPropertyFriendlyName "maximum radius for created lights"
        float m_flMaximumLightingRadius; // 0x1d0        
        // metadata: MPropertyFriendlyName "amount of damping of changes"
        float m_flPositionDampingConstant; // 0x1d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_UpdateLightSource because it is not a standard-layout class
    static_assert(sizeof(C_OP_UpdateLightSource) == 0x1d8);
};
