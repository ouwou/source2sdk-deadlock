#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0x320
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_DecayOffscreen : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "Offscreen Time Before Decay"
        particleslib::CParticleCollectionFloatInput m_flOffscreenTime; // 0x1c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DecayOffscreen because it is not a standard-layout class
    static_assert(sizeof(C_OP_DecayOffscreen) == 0x320);
};
