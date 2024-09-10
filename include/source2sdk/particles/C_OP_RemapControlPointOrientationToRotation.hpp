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
    class C_OP_RemapControlPointOrientationToRotation : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point"
        int32_t m_nCP; // 0x1c0        
        // metadata: MPropertyFriendlyName "rotation field"
        // metadata: MPropertyAttributeChoiceName "particlefield_rotation"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4        
        // metadata: MPropertyFriendlyName "offset rotation"
        float m_flOffsetRot; // 0x1c8        
        // metadata: MPropertyFriendlyName "control point axis"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        int32_t m_nComponent; // 0x1cc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapControlPointOrientationToRotation because it is not a standard-layout class
    
    static_assert(sizeof(C_OP_RemapControlPointOrientationToRotation) == 0x1d0);
};
