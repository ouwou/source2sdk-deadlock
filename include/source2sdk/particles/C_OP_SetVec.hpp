#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x9a8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetVec : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "value"
        particleslib::CPerParticleVecInput m_InputValue; // 0x1c0        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nOutputField; // 0x838        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x83c        
        // metadata: MPropertyFriendlyName "interpolation"
        particleslib::CPerParticleFloatInput m_Lerp; // 0x840        
        // metadata: MPropertyFriendlyName "normalize result"
        bool m_bNormalizedOutput; // 0x9a0        
        [[maybe_unused]] std::uint8_t pad_0x9a1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetVec because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetVec) == 0x9a8);
};
