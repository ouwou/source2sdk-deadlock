#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    // Size: 0x1d0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_Diffusion : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "Radius scale for particle influence"
        float m_flRadiusScale; // 0x1c0        
        // metadata: MPropertyFriendlyName "Output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4        
        // metadata: MPropertyFriendlyName "Resolution to use for creating a voxel grid"
        int32_t m_nVoxelGridResolution; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_Diffusion because it is not a standard-layout class
    static_assert(sizeof(C_OP_Diffusion) == 0x1d0);
};
