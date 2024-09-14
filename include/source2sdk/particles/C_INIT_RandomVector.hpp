#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CRandomNumberGeneratorParameters.hpp"
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
    // Size: 0x1f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RandomVector : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "min"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vecMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "max"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vecMax; // 0x1d4        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0        
        // metadata: MPropertyFriendlyName "Random number generator controls"
        particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1e4        
        [[maybe_unused]] std::uint8_t pad_0x1ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RandomVector because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RandomVector) == 0x1f0);
};
