#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x1d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RandomScalar : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "min"
        float m_flMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "max"
        float m_flMax; // 0x1cc        
        // metadata: MPropertyFriendlyName "exponent"
        float m_flExponent; // 0x1d0        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RandomScalar because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RandomScalar) == 0x1d8);
};
