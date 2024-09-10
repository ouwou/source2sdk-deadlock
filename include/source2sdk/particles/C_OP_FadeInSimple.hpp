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
    // Size: 0x1c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_FadeInSimple : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "proportional fade in time"
        float m_flFadeInTime; // 0x1c0        
        // metadata: MPropertyFriendlyName "alpha field"
        // metadata: MPropertyAttributeChoiceName "particlefield_alpha"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_FadeInSimple because it is not a standard-layout class
    
    static_assert(sizeof(C_OP_FadeInSimple) == 0x1c8);
};