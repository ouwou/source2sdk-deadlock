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
    // Size: 0x1d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_PlaneCull : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point for point on plane"
        int32_t m_nPlaneControlPoint; // 0x1c0        
        // metadata: MPropertyFriendlyName "plane normal"
        // metadata: MVectorIsCoordinate
        Vector m_vecPlaneDirection; // 0x1c4        
        // metadata: MPropertyFriendlyName "use local space"
        bool m_bLocalSpace; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d1[0x3]; // 0x1d1
        // metadata: MPropertyFriendlyName "cull plane offset"
        float m_flPlaneOffset; // 0x1d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_PlaneCull because it is not a standard-layout class
    static_assert(sizeof(C_OP_PlaneCull) == 0x1d8);
};
