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
    // Size: 0xf0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Item_AOESilence : public client::CCitadelModifierAura
    {
    public:
        float m_flStartRadius; // 0xe0        
        float m_flEndRadius; // 0xe4        
        float m_flSpreadDuration; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Item_AOESilence because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Item_AOESilence) == 0xf0);
};
