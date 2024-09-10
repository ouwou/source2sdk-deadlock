#pragma once
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
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
    // Size: 0x480
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_CollideWithParentParticles : public particles::CParticleFunctionConstraint
    {
    public:
        // metadata: MPropertyFriendlyName "parent particle radius scale"
        particleslib::CPerParticleFloatInput m_flParentRadiusScale; // 0x1c0        
        // metadata: MPropertyFriendlyName "particle radius scale"
        particleslib::CPerParticleFloatInput m_flRadiusScale; // 0x320        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_CollideWithParentParticles because it is not a standard-layout class
    
    static_assert(sizeof(C_OP_CollideWithParentParticles) == 0x480);
};