#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0x1b40
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateWithinSphereTransform : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "distance min"
        particleslib::CPerParticleFloatInput m_fRadiusMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "distance max"
        particleslib::CPerParticleFloatInput m_fRadiusMax; // 0x328        
        // metadata: MPropertyFriendlyName "distance bias"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_vecDistanceBias; // 0x488        
        // metadata: MPropertyFriendlyName "distance bias absolute value"
        // metadata: MVectorIsCoordinate
        Vector m_vecDistanceBiasAbs; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x4]; // 0xb0c
        // metadata: MPropertyFriendlyName "input position transform"
        particleslib::CParticleTransformInput m_TransformInput; // 0xb10        
        // metadata: MPropertyFriendlyName "speed min"
        particleslib::CPerParticleFloatInput m_fSpeedMin; // 0xb78        
        // metadata: MPropertyFriendlyName "speed max"
        particleslib::CPerParticleFloatInput m_fSpeedMax; // 0xcd8        
        // metadata: MPropertyFriendlyName "speed random exponent"
        float m_fSpeedRandExp; // 0xe38        
        // metadata: MPropertyFriendlyName "bias in local system"
        bool m_bLocalCoords; // 0xe3c        
        [[maybe_unused]] std::uint8_t pad_0xe3d[0x3]; // 0xe3d
        // metadata: MPropertyFriendlyName "randomly distribution growth time"
        float m_flEndCPGrowthTime; // 0xe40        
        [[maybe_unused]] std::uint8_t pad_0xe44[0x4]; // 0xe44
        // metadata: MPropertyFriendlyName "speed in local coordinate system min"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xe48        
        // metadata: MPropertyFriendlyName "speed in local coordinate system max"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x14c0        
        // metadata: MPropertyFriendlyName "Output vector"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1b38        
        // metadata: MPropertyFriendlyName "Velocity vector"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldVelocity; // 0x1b3c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateWithinSphereTransform because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateWithinSphereTransform) == 0x1b40);
};
