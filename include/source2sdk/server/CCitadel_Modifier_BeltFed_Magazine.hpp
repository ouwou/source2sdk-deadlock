#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x228
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BeltFed_Magazine : public server::CCitadelModifier
    {
    public:
        bool m_bInitialized; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x3]; // 0xc1
        float m_flSpinUpRateOverride; // 0xc4        
        float m_flSpinUpDecayOverride; // 0xc8        
        float m_flMaxCycleTimeOverride; // 0xcc        
        float m_flMaxBurstFireCooldownOverride; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x154];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BeltFed_Magazine because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BeltFed_Magazine) == 0x228);
};
