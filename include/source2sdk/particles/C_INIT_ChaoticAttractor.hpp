#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    class C_INIT_ChaoticAttractor : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "pickover A parameter"
        float m_flAParm; // 0x1c8        
        // metadata: MPropertyFriendlyName "pickover B parameter"
        float m_flBParm; // 0x1cc        
        // metadata: MPropertyFriendlyName "pickover C parameter"
        float m_flCParm; // 0x1d0        
        // metadata: MPropertyFriendlyName "pickover D parameter"
        float m_flDParm; // 0x1d4        
        // metadata: MPropertyFriendlyName "scale"
        float m_flScale; // 0x1d8        
        // metadata: MPropertyFriendlyName "speed min"
        float m_flSpeedMin; // 0x1dc        
        // metadata: MPropertyFriendlyName "speed max"
        float m_flSpeedMax; // 0x1e0        
        // metadata: MPropertyFriendlyName "relative control point number"
        int32_t m_nBaseCP; // 0x1e4        
        // metadata: MPropertyFriendlyName "uniform speed"
        bool m_bUniformSpeed; // 0x1e8        
        [[maybe_unused]] std::uint8_t pad_0x1e9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_ChaoticAttractor because it is not a standard-layout class
    static_assert(sizeof(C_INIT_ChaoticAttractor) == 0x1f0);
};
