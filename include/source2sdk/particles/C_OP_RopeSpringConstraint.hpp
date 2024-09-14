#pragma once
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
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
    // Size: 0x748
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RopeSpringConstraint : public particles::CParticleFunctionConstraint
    {
    public:
        // metadata: MPropertyFriendlyName "slack"
        particleslib::CParticleCollectionFloatInput m_flRestLength; // 0x1c0        
        // metadata: MPropertyFriendlyName "minimum segment length %"
        particleslib::CParticleCollectionFloatInput m_flMinDistance; // 0x320        
        // metadata: MPropertyFriendlyName "maximum segment length %"
        particleslib::CParticleCollectionFloatInput m_flMaxDistance; // 0x480        
        // metadata: MPropertyFriendlyName "scale factor for spring correction"
        float m_flAdjustmentScale; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4]; // 0x5e4
        // metadata: MPropertyFriendlyName "manual resting spacing"
        particleslib::CParticleCollectionFloatInput m_flInitialRestingLength; // 0x5e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RopeSpringConstraint because it is not a standard-layout class
    static_assert(sizeof(C_OP_RopeSpringConstraint) == 0x748);
};
