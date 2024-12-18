#pragma once
#include "source2sdk/client/CCitadelModifierAura.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x100
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Cadence_Crescendo_AOE : public client::CCitadelModifierAura
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf0[0x8]; // 0xf0
        int32_t m_nTicks; // 0xf8        
        [[maybe_unused]] std::uint8_t pad_0xfc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Cadence_Crescendo_AOE because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Cadence_Crescendo_AOE) == 0x100);
};
