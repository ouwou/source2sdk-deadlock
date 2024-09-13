#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeAntiTunnelProbe_t
    {
    public:
        float flWeight; // 0x0        
        uint32_t nFlags; // 0x4        
        uint16_t nProbeNode; // 0x8        
        uint16_t nCount; // 0xa        
        uint32_t nBegin; // 0xc        
        float flActivationDistance; // 0x10        
        float flCurvatureRadius; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeAntiTunnelProbe_t, flWeight) == 0x0);
    static_assert(offsetof(FeAntiTunnelProbe_t, nFlags) == 0x4);
    static_assert(offsetof(FeAntiTunnelProbe_t, nProbeNode) == 0x8);
    static_assert(offsetof(FeAntiTunnelProbe_t, nCount) == 0xa);
    static_assert(offsetof(FeAntiTunnelProbe_t, nBegin) == 0xc);
    static_assert(offsetof(FeAntiTunnelProbe_t, flActivationDistance) == 0x10);
    static_assert(offsetof(FeAntiTunnelProbe_t, flCurvatureRadius) == 0x14);
    
    static_assert(sizeof(FeAntiTunnelProbe_t) == 0x18);
};
