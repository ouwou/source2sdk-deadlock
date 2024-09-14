#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particles/ParticleDirectionNoiseType_t.hpp"
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
    // Size: 0x1e78
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_CurlNoiseForce : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "noise type"
        particles::ParticleDirectionNoiseType_t m_nNoiseType; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d4[0x4]; // 0x1d4
        // metadata: MPropertyFriendlyName "noise frequency"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_vecNoiseFreq; // 0x1d8        
        // metadata: MPropertyFriendlyName "noise amplitude"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_vecNoiseScale; // 0x850        
        // metadata: MPropertyFriendlyName "offset"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_vecOffset; // 0xec8        
        // metadata: MPropertyFriendlyName "offset rate"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_vecOffsetRate; // 0x1540        
        // metadata: MPropertyFriendlyName "worley seed"
        particleslib::CPerParticleFloatInput m_flWorleySeed; // 0x1bb8        
        // metadata: MPropertyFriendlyName "worley jitter"
        particleslib::CPerParticleFloatInput m_flWorleyJitter; // 0x1d18        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_CurlNoiseForce because it is not a standard-layout class
    static_assert(sizeof(C_OP_CurlNoiseForce) == 0x1e78);
};
