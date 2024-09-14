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
    class C_OP_OrientTo2dDirection : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "rotation offset"
        float m_flRotOffset; // 0x1c0        
        // metadata: MPropertyFriendlyName "spin strength"
        float m_flSpinStrength; // 0x1c4        
        // metadata: MPropertyFriendlyName "rotation field"
        // metadata: MPropertyAttributeChoiceName "particlefield_rotation"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_OrientTo2dDirection because it is not a standard-layout class
    static_assert(sizeof(C_OP_OrientTo2dDirection) == 0x1d0);
};
