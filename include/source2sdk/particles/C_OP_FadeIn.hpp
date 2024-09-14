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
    // Size: 0x1d0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_FadeIn : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "fade in time min"
        float m_flFadeInTimeMin; // 0x1c0        
        // metadata: MPropertyFriendlyName "fade in time max"
        float m_flFadeInTimeMax; // 0x1c4        
        // metadata: MPropertyFriendlyName "fade in time exponent"
        float m_flFadeInTimeExp; // 0x1c8        
        // metadata: MPropertyFriendlyName "proportional 0/1"
        bool m_bProportional; // 0x1cc        
        [[maybe_unused]] std::uint8_t pad_0x1cd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_FadeIn because it is not a standard-layout class
    static_assert(sizeof(C_OP_FadeIn) == 0x1d0);
};
