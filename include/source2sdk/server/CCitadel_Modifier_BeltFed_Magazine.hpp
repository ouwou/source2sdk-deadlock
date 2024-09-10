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
    // Size: 0x230
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BeltFed_Magazine : public server::CCitadelModifier
    {
    public:
        bool m_bInitialized; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xc9[0x3]; // 0xc9
        float m_flSpinUpRateOverride; // 0xcc        
        float m_flSpinUpDecayOverride; // 0xd0        
        float m_flMaxCycleTimeOverride; // 0xd4        
        float m_flMaxBurstFireCooldownOverride; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xdc[0x154];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BeltFed_Magazine because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_BeltFed_Magazine) == 0x230);
};
