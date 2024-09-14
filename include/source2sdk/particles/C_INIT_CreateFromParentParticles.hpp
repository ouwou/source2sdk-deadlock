#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x1e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateFromParentParticles : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "inherited velocity scale"
        float m_flVelocityScale; // 0x1c8        
        // metadata: MPropertyFriendlyName "particle increment amount"
        float m_flIncrement; // 0x1cc        
        // metadata: MPropertyFriendlyName "random parent particle distribution"
        bool m_bRandomDistribution; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d1[0x3]; // 0x1d1
        // metadata: MPropertyFriendlyName "random seed"
        int32_t m_nRandomSeed; // 0x1d4        
        // metadata: MPropertyFriendlyName "sub frame interpolation"
        bool m_bSubFrame; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1d9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateFromParentParticles because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateFromParentParticles) == 0x1e0);
};
