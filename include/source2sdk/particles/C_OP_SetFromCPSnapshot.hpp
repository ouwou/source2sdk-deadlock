#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x600
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetFromCPSnapshot : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "snapshot control point number"
        int32_t m_nControlPointNumber; // 0x1c0        
        // metadata: MPropertyFriendlyName "field to read"
        // metadata: MPropertyAttributeChoiceName "particlefield"
        particles::ParticleAttributeIndex_t m_nAttributeToRead; // 0x1c4        
        // metadata: MPropertyFriendlyName "field to write"
        // metadata: MPropertyAttributeChoiceName "particlefield"
        particles::ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c8        
        // metadata: MPropertyFriendlyName "local space control point number"
        int32_t m_nLocalSpaceCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "random order"
        bool m_bRandom; // 0x1d0        
        // metadata: MPropertyFriendlyName "reverse order"
        bool m_bReverse; // 0x1d1        
        [[maybe_unused]] std::uint8_t pad_0x1d2[0x2]; // 0x1d2
        // metadata: MPropertyFriendlyName "random seed"
        int32_t m_nRandomSeed; // 0x1d4        
        // metadata: MPropertyFriendlyName "Snapshot start point"
        particleslib::CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x1d8        
        // metadata: MPropertyFriendlyName "Snapshot increment amount"
        particleslib::CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x338        
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0x498        
        // metadata: MPropertyFriendlyName "Sub-Sample Between Input Points"
        bool m_bSubSample; // 0x5f8        
        // metadata: MPropertyFriendlyName "Position also sets Previous Position"
        bool m_bPrev; // 0x5f9        
        [[maybe_unused]] std::uint8_t pad_0x5fa[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetFromCPSnapshot because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetFromCPSnapshot) == 0x600);
};
