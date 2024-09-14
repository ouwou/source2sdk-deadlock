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
    class CCitadelControlPointTrigger;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ControlPointBlockerAura : public server::CCitadelModifierAura
    {
    public:
        // m_hCP has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelControlPointTrigger> m_hCP;
        char m_hCP[0x4]; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ControlPointBlockerAura because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ControlPointBlockerAura) == 0xe8);
};
