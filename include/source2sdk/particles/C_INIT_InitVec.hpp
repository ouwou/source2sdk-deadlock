#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
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
    // Size: 0x850
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_InitVec : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "value"
        particleslib::CPerParticleVecInput m_InputValue; // 0x1c8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nOutputField; // 0x840        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x844        
        // metadata: MPropertyFriendlyName "normalize result"
        bool m_bNormalizedOutput; // 0x848        
        // metadata: MPropertyFriendlyName "set previous position"
        // metadata: MPropertySuppressExpr "m_nOutputField != PARTICLE_ATTRIBUTE_XYZ"
        bool m_bWritePreviousPosition; // 0x849        
        [[maybe_unused]] std::uint8_t pad_0x84a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_InitVec because it is not a standard-layout class
    static_assert(sizeof(C_INIT_InitVec) == 0x850);
};
