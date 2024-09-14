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
    class C_INIT_PlaneCull : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "control point of plane"
        int32_t m_nControlPoint; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4]; // 0x1cc
        // metadata: MPropertyFriendlyName "cull offset"
        particleslib::CParticleCollectionFloatInput m_flDistance; // 0x1d0        
        // metadata: MPropertyFriendlyName "flip cull normal"
        bool m_bCullInside; // 0x330        
        [[maybe_unused]] std::uint8_t pad_0x331[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_PlaneCull because it is not a standard-layout class
    static_assert(sizeof(C_INIT_PlaneCull) == 0x338);
};
