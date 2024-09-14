#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
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
    // Size: 0x1f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RemapParticleCountToScalar : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8        
        // metadata: MPropertyFriendlyName "input minimum"
        int32_t m_nInputMin; // 0x1cc        
        // metadata: MPropertyFriendlyName "input maximum"
        int32_t m_nInputMax; // 0x1d0        
        // metadata: MPropertyFriendlyName "input scale control point"
        int32_t m_nScaleControlPoint; // 0x1d4        
        // metadata: MPropertyFriendlyName "input scale control point field"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nScaleControlPointField; // 0x1d8        
        // metadata: MPropertyFriendlyName "output minimum"
        float m_flOutputMin; // 0x1dc        
        // metadata: MPropertyFriendlyName "output maximum"
        float m_flOutputMax; // 0x1e0        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x1e4        
        // metadata: MPropertyFriendlyName "only active within specified input range"
        bool m_bActiveRange; // 0x1e8        
        // metadata: MPropertyFriendlyName "invert input from total particle count"
        bool m_bInvert; // 0x1e9        
        // metadata: MPropertyFriendlyName "wrap input"
        bool m_bWrap; // 0x1ea        
        [[maybe_unused]] std::uint8_t pad_0x1eb[0x1]; // 0x1eb
        // metadata: MPropertyFriendlyName "remap bias"
        float m_flRemapBias; // 0x1ec        
        [[maybe_unused]] std::uint8_t pad_0x1f0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RemapParticleCountToScalar because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RemapParticleCountToScalar) == 0x1f8);
};
