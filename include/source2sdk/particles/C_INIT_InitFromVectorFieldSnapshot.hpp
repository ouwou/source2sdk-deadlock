#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x850
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_InitFromVectorFieldSnapshot : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "snapshot control point number"
        int32_t m_nControlPointNumber; // 0x1c8        
        // metadata: MPropertyFriendlyName "local space control point number"
        int32_t m_nLocalSpaceCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "weight update control point"
        int32_t m_nWeightUpdateCP; // 0x1d0        
        // metadata: MPropertyFriendlyName "use vertical velocity for weighting"
        bool m_bUseVerticalVelocity; // 0x1d4        
        [[maybe_unused]] std::uint8_t pad_0x1d5[0x3]; // 0x1d5
        // metadata: MPropertyFriendlyName "Component Scale"
        particleslib::CPerParticleVecInput m_vecScale; // 0x1d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_InitFromVectorFieldSnapshot because it is not a standard-layout class
    static_assert(sizeof(C_INIT_InitFromVectorFieldSnapshot) == 0x850);
};
