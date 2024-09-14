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
    // Size: 0x1d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_VelocityFromNormal : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "random speed min"
        float m_fSpeedMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "random speed max"
        float m_fSpeedMax; // 0x1cc        
        // metadata: MPropertyFriendlyName "ignore delta time"
        bool m_bIgnoreDt; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_VelocityFromNormal because it is not a standard-layout class
    static_assert(sizeof(C_INIT_VelocityFromNormal) == 0x1d8);
};
