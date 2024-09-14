#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
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
    class C_OP_DensityForce : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "Radius scale for particle influence"
        float m_flRadiusScale; // 0x1d0        
        // metadata: MPropertyFriendlyName "Scale of force"
        float m_flForceScale; // 0x1d4        
        // metadata: MPropertyFriendlyName "Target density"
        float m_flTargetDensity; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DensityForce because it is not a standard-layout class
    static_assert(sizeof(C_OP_DensityForce) == 0x1e0);
};
