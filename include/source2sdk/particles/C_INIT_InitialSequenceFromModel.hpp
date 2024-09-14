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
    // Size: 0x1e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_InitialSequenceFromModel : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc        
        // metadata: MPropertyFriendlyName "current anim time output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1d0        
        // metadata: MPropertyFriendlyName "input minimum"
        float m_flInputMin; // 0x1d4        
        // metadata: MPropertyFriendlyName "input maximum"
        float m_flInputMax; // 0x1d8        
        // metadata: MPropertyFriendlyName "output minimum"
        float m_flOutputMin; // 0x1dc        
        // metadata: MPropertyFriendlyName "output maximum"
        float m_flOutputMax; // 0x1e0        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x1e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_InitialSequenceFromModel because it is not a standard-layout class
    static_assert(sizeof(C_INIT_InitialSequenceFromModel) == 0x1e8);
};
