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
    class C_INIT_RandomVectorComponent : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "min"
        float m_flMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "max"
        float m_flMax; // 0x1cc        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0        
        // metadata: MPropertyFriendlyName "component 0/1/2 X/Y/Z"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        int32_t m_nComponent; // 0x1d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RandomVectorComponent because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RandomVectorComponent) == 0x1d8);
};
