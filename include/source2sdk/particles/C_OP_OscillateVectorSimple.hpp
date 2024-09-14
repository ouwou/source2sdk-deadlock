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
    // Size: 0x1e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_OscillateVectorSimple : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "oscillation rate"
        // metadata: MVectorIsSometimesCoordinate "m_nField"
        Vector m_Rate; // 0x1c0        
        // metadata: MPropertyFriendlyName "oscillation frequency"
        Vector m_Frequency; // 0x1cc        
        // metadata: MPropertyFriendlyName "oscillation field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nField; // 0x1d8        
        // metadata: MPropertyFriendlyName "oscillation multiplier"
        float m_flOscMult; // 0x1dc        
        // metadata: MPropertyFriendlyName "oscillation start phase"
        float m_flOscAdd; // 0x1e0        
        // metadata: MPropertyFriendlyName "offset instead of accelerate position"
        bool m_bOffset; // 0x1e4        
        [[maybe_unused]] std::uint8_t pad_0x1e5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_OscillateVectorSimple because it is not a standard-layout class
    static_assert(sizeof(C_OP_OscillateVectorSimple) == 0x1e8);
};
