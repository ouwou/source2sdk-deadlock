#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0x8b0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_DistanceBetweenTransforms : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "strarting transform"
        particleslib::CParticleTransformInput m_TransformStart; // 0x1c8        
        // metadata: MPropertyFriendlyName "end transform"
        particleslib::CParticleTransformInput m_TransformEnd; // 0x230        
        // metadata: MPropertyFriendlyName "distance minimum"
        particleslib::CPerParticleFloatInput m_flInputMin; // 0x298        
        // metadata: MPropertyFriendlyName "distance maximum"
        particleslib::CPerParticleFloatInput m_flInputMax; // 0x3f8        
        // metadata: MPropertyFriendlyName "output minimum"
        particleslib::CPerParticleFloatInput m_flOutputMin; // 0x558        
        // metadata: MPropertyFriendlyName "output maximum"
        particleslib::CPerParticleFloatInput m_flOutputMax; // 0x6b8        
        // metadata: MPropertyFriendlyName "maximum trace length"
        float m_flMaxTraceLength; // 0x818        
        // metadata: MPropertyFriendlyName "LOS Failure Scalar"
        float m_flLOSScale; // 0x81c        
        // metadata: MPropertyFriendlyName "LOS collision group"
        char m_CollisionGroupName[128]; // 0x820        
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x8a0        
        // metadata: MPropertyFriendlyName "ensure line of sight"
        bool m_bLOS; // 0x8a4        
        [[maybe_unused]] std::uint8_t pad_0x8a5[0x3]; // 0x8a5
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x8a8        
        [[maybe_unused]] std::uint8_t pad_0x8ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DistanceBetweenTransforms because it is not a standard-layout class
    static_assert(sizeof(C_OP_DistanceBetweenTransforms) == 0x8b0);
};
