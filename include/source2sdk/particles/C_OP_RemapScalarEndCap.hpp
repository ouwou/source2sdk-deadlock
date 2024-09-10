#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    class C_OP_RemapScalarEndCap : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "input field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c0        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4        
        // metadata: MPropertyFriendlyName "input minimum"
        float m_flInputMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "input maximum"
        float m_flInputMax; // 0x1cc        
        // metadata: MPropertyFriendlyName "output minimum"
        float m_flOutputMin; // 0x1d0        
        // metadata: MPropertyFriendlyName "output maximum"
        float m_flOutputMax; // 0x1d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapScalarEndCap because it is not a standard-layout class
    
    static_assert(sizeof(C_OP_RemapScalarEndCap) == 0x1d8);
};