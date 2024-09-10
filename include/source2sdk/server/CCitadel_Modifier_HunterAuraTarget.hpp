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
    // Size: 0x190
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_HunterAuraTarget : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0xa8]; // 0xc8
        float m_flDebuffScale; // 0x170        
        [[maybe_unused]] std::uint8_t pad_0x174[0x4]; // 0x174
        // m_AuraModifierHandle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_AuraModifierHandle;
        char m_AuraModifierHandle[0x18]; // 0x178        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HunterAuraTarget because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_HunterAuraTarget) == 0x190);
};
