#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0x858
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointToCPVelocity : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "control point input"
        int32_t m_nCPInput; // 0x1c8        
        // metadata: MPropertyFriendlyName "control point number to set velocity"
        int32_t m_nCPOutputVel; // 0x1cc        
        // metadata: MPropertyFriendlyName "normalize output"
        bool m_bNormalize; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d1[0x3]; // 0x1d1
        // metadata: MPropertyFriendlyName "control point number to set magnitude"
        int32_t m_nCPOutputMag; // 0x1d4        
        // metadata: MPropertyFriendlyName "control point field for magnitude"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nCPField; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4]; // 0x1dc
        // metadata: MPropertyFriendlyName "comparison velocity"
        particleslib::CParticleCollectionVecInput m_vecComparisonVelocity; // 0x1e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointToCPVelocity because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointToCPVelocity) == 0x858);
};
