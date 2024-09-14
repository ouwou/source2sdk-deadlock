#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/ScalarExpressionType_t.hpp"
#include "source2sdk/particleslib/CParticleRemapFloatInput.hpp"
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
    // Size: 0x610
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetAttributeToScalarExpression : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "expression"
        particles::ScalarExpressionType_t m_nExpression; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "input 1"
        particleslib::CPerParticleFloatInput m_flInput1; // 0x1c8        
        // metadata: MPropertyFriendlyName "input 2"
        particleslib::CPerParticleFloatInput m_flInput2; // 0x328        
        // metadata: MPropertyFriendlyName "output"
        particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0x488        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nOutputField; // 0x5e8        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5f0[0x20];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetAttributeToScalarExpression because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetAttributeToScalarExpression) == 0x610);
};
