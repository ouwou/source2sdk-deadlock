#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendMode_t.hpp"
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
    // Size: 0x210
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RandomColor : public particles::CParticleFunctionInitializer
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1c8[0x1c]; // 0x1c8
        // metadata: MPropertyFriendlyName "color1"
        Color m_ColorMin; // 0x1e4        
        // metadata: MPropertyFriendlyName "color2"
        Color m_ColorMax; // 0x1e8        
        // metadata: MPropertyFriendlyName "tint clamp min"
        Color m_TintMin; // 0x1ec        
        // metadata: MPropertyFriendlyName "tint clamp max"
        Color m_TintMax; // 0x1f0        
        // metadata: MPropertyFriendlyName "tint perc"
        float m_flTintPerc; // 0x1f4        
        // metadata: MPropertyFriendlyName "tint update movement threshold"
        float m_flUpdateThreshold; // 0x1f8        
        // metadata: MPropertyFriendlyName "tint control point"
        int32_t m_nTintCP; // 0x1fc        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x200        
        // metadata: MPropertyFriendlyName "tint blend mode"
        particles::ParticleColorBlendMode_t m_nTintBlendMode; // 0x204        
        // metadata: MPropertyFriendlyName "light amplification amount"
        float m_flLightAmplification; // 0x208        
        [[maybe_unused]] std::uint8_t pad_0x20c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RandomColor because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RandomColor) == 0x210);
};
