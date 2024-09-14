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
    // Size: 0x1f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_TimeVaryingForce : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "time to start transition"
        float m_flStartLerpTime; // 0x1d0        
        // metadata: MPropertyFriendlyName "starting force"
        // metadata: MVectorIsCoordinate
        Vector m_StartingForce; // 0x1d4        
        // metadata: MPropertyFriendlyName "time to end transition"
        float m_flEndLerpTime; // 0x1e0        
        // metadata: MPropertyFriendlyName "ending force"
        // metadata: MVectorIsCoordinate
        Vector m_EndingForce; // 0x1e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_TimeVaryingForce because it is not a standard-layout class
    static_assert(sizeof(C_OP_TimeVaryingForce) == 0x1f0);
};
