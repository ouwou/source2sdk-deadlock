#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x338
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateFromCPs : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "control point increment amount"
        int32_t m_nIncrement; // 0x1c8        
        // metadata: MPropertyFriendlyName "starting control point"
        int32_t m_nMinCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "ending control point"
        // metadata: MParticleMinVersion "2"
        int32_t m_nMaxCP; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d4[0x4]; // 0x1d4
        // metadata: MPropertyFriendlyName "dynamic control point count"
        particleslib::CParticleCollectionFloatInput m_nDynamicCPCount; // 0x1d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateFromCPs because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateFromCPs) == 0x338);
};
