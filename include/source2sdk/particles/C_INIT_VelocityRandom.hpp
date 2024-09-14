#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CRandomNumberGeneratorParameters.hpp"
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
    // Size: 0x1190
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_VelocityRandom : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4]; // 0x1cc
        // metadata: MPropertyFriendlyName "random speed min"
        particleslib::CPerParticleFloatInput m_fSpeedMin; // 0x1d0        
        // metadata: MPropertyFriendlyName "random speed max"
        particleslib::CPerParticleFloatInput m_fSpeedMax; // 0x330        
        // metadata: MPropertyFriendlyName "speed in local coordinate system min"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x490        
        // metadata: MPropertyFriendlyName "speed in local coordinate system max"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xb08        
        // metadata: MPropertyFriendlyName "Ignore delta time (RenderTrails)"
        bool m_bIgnoreDT; // 0x1180        
        [[maybe_unused]] std::uint8_t pad_0x1181[0x3]; // 0x1181
        // metadata: MPropertyFriendlyName "Random number generator controls"
        particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1184        
        [[maybe_unused]] std::uint8_t pad_0x118c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_VelocityRandom because it is not a standard-layout class
    static_assert(sizeof(C_INIT_VelocityRandom) == 0x1190);
};
