#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
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
    class C_OP_LerpVector : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0        
        // metadata: MPropertyFriendlyName "value to lerp to"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vecOutput; // 0x1c4        
        // metadata: MPropertyFriendlyName "start time"
        float m_flStartTime; // 0x1d0        
        // metadata: MPropertyFriendlyName "end time"
        float m_flEndTime; // 0x1d4        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LerpVector because it is not a standard-layout class
    static_assert(sizeof(C_OP_LerpVector) == 0x1e0);
};
