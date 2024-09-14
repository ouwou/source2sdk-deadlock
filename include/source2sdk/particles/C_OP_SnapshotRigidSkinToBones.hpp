#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
    // Size: 0x1c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SnapshotRigidSkinToBones : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "rotate normals"
        bool m_bTransformNormals; // 0x1c0        
        // metadata: MPropertyFriendlyName "scale radii"
        bool m_bTransformRadii; // 0x1c1        
        [[maybe_unused]] std::uint8_t pad_0x1c2[0x2]; // 0x1c2
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SnapshotRigidSkinToBones because it is not a standard-layout class
    static_assert(sizeof(C_OP_SnapshotRigidSkinToBones) == 0x1c8);
};
