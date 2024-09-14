#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x350
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_LerpToOtherAttribute : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1c0        
        // metadata: MPropertyFriendlyName "input attribute from"
        // metadata: MPropertyAttributeChoiceName "particlefield"
        particles::ParticleAttributeIndex_t m_nFieldInputFrom; // 0x320        
        // metadata: MPropertyFriendlyName "input attribute to"
        // metadata: MPropertyAttributeChoiceName "particlefield"
        particles::ParticleAttributeIndex_t m_nFieldInput; // 0x324        
        // metadata: MPropertyFriendlyName "output attribute"
        // metadata: MPropertyAttributeChoiceName "particlefield"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x328        
        [[maybe_unused]] std::uint8_t pad_0x32c[0x24];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LerpToOtherAttribute because it is not a standard-layout class
    static_assert(sizeof(C_OP_LerpToOtherAttribute) == 0x350);
};
