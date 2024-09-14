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
    // Size: 0x188
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_HunterAuraTarget : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0xa8]; // 0xc0
        float m_flDebuffScale; // 0x168        
        [[maybe_unused]] std::uint8_t pad_0x16c[0x4]; // 0x16c
        // m_AuraModifierHandle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_AuraModifierHandle;
        char m_AuraModifierHandle[0x18]; // 0x170        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HunterAuraTarget because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_HunterAuraTarget) == 0x188);
};
