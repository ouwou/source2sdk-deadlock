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
    // Size: 0x210
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_TurbulenceForce : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "noise scale 0"
        float m_flNoiseCoordScale0; // 0x1d0        
        // metadata: MPropertyFriendlyName "noise scale 1"
        float m_flNoiseCoordScale1; // 0x1d4        
        // metadata: MPropertyFriendlyName "noise scale 2"
        float m_flNoiseCoordScale2; // 0x1d8        
        // metadata: MPropertyFriendlyName "noise scale 3"
        float m_flNoiseCoordScale3; // 0x1dc        
        // metadata: MPropertyFriendlyName "noise amount 0"
        // metadata: MVectorIsCoordinate
        Vector m_vecNoiseAmount0; // 0x1e0        
        // metadata: MPropertyFriendlyName "noise amount 1"
        // metadata: MVectorIsCoordinate
        Vector m_vecNoiseAmount1; // 0x1ec        
        // metadata: MPropertyFriendlyName "noise amount 2"
        // metadata: MVectorIsCoordinate
        Vector m_vecNoiseAmount2; // 0x1f8        
        // metadata: MPropertyFriendlyName "noise amount 3"
        // metadata: MVectorIsCoordinate
        Vector m_vecNoiseAmount3; // 0x204        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_TurbulenceForce because it is not a standard-layout class
    static_assert(sizeof(C_OP_TurbulenceForce) == 0x210);
};
