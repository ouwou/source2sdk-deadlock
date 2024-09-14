#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x490
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_InitFloat : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "value"
        particleslib::CPerParticleFloatInput m_InputValue; // 0x1c8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nOutputField; // 0x328        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x32c        
        // metadata: MPropertyFriendlyName "per-particle strength"
        particleslib::CPerParticleFloatInput m_InputStrength; // 0x330        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_InitFloat because it is not a standard-layout class
    static_assert(sizeof(C_INIT_InitFloat) == 0x490);
};
