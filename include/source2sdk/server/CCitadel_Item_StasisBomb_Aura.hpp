#pragma once
#include "source2sdk/server/CCitadelModifierAura.hpp"
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
    // Size: 0x120
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Item_StasisBomb_Aura : public server::CCitadelModifierAura
    {
    public:
        float m_AuraRadius; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe4[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_StasisBomb_Aura because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_StasisBomb_Aura) == 0x120);
};
