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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x210
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_FadeOut : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "fade out time min"
        float m_flFadeOutTimeMin; // 0x1c0        
        // metadata: MPropertyFriendlyName "fade out time max"
        float m_flFadeOutTimeMax; // 0x1c4        
        // metadata: MPropertyFriendlyName "fade out time exponent"
        float m_flFadeOutTimeExp; // 0x1c8        
        // metadata: MPropertyFriendlyName "fade bias"
        float m_flFadeBias; // 0x1cc        
        [[maybe_unused]] std::uint8_t pad_0x1d0[0x30]; // 0x1d0
        // metadata: MPropertyFriendlyName "proportional 0/1"
        bool m_bProportional; // 0x200        
        // metadata: MPropertyFriendlyName "ease in and out"
        bool m_bEaseInAndOut; // 0x201        
        [[maybe_unused]] std::uint8_t pad_0x202[0xe];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_FadeOut because it is not a standard-layout class
    static_assert(sizeof(C_OP_FadeOut) == 0x210);
};
