#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
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
    // Size: 0x208
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ForceBasedOnDistanceToPlane : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "min distance from plane"
        float m_flMinDist; // 0x1d0        
        // metadata: MPropertyFriendlyName "force at min distance"
        // metadata: MVectorIsCoordinate
        Vector m_vecForceAtMinDist; // 0x1d4        
        // metadata: MPropertyFriendlyName "max distance from plane"
        float m_flMaxDist; // 0x1e0        
        // metadata: MPropertyFriendlyName "force at max distance"
        // metadata: MVectorIsCoordinate
        Vector m_vecForceAtMaxDist; // 0x1e4        
        // metadata: MPropertyFriendlyName "plane normal"
        // metadata: MVectorIsCoordinate
        Vector m_vecPlaneNormal; // 0x1f0        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1fc        
        // metadata: MPropertyFriendlyName "exponent"
        float m_flExponent; // 0x200        
        [[maybe_unused]] std::uint8_t pad_0x204[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ForceBasedOnDistanceToPlane because it is not a standard-layout class
    static_assert(sizeof(C_OP_ForceBasedOnDistanceToPlane) == 0x208);
};
