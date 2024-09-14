#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleFalloffFunction_t.hpp"
#include "source2sdk/particles/ParticleImpulseType_t.hpp"
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
    // Size: 0x5f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateParticleImpulse : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "radius"
        particleslib::CPerParticleFloatInput m_InputRadius; // 0x1c8        
        // metadata: MPropertyFriendlyName "magnitude"
        particleslib::CPerParticleFloatInput m_InputMagnitude; // 0x328        
        // metadata: MPropertyFriendlyName "force falloff function"
        particles::ParticleFalloffFunction_t m_nFalloffFunction; // 0x488        
        [[maybe_unused]] std::uint8_t pad_0x48c[0x4]; // 0x48c
        // metadata: MPropertyFriendlyName "exponential falloff exponent"
        particleslib::CPerParticleFloatInput m_InputFalloffExp; // 0x490        
        // metadata: MPropertyFriendlyName "impulse type"
        particles::ParticleImpulseType_t m_nImpulseType; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateParticleImpulse because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateParticleImpulse) == 0x5f8);
};
