#pragma once
#include "source2sdk/server/CCitadel_Item.hpp"
#include "source2sdk/server/CCitadel_Modifier_Ricochet_Proc.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb20
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_Ricochet : public server::CCitadel_Item
    {
    public:
        // m_hRicochetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadel_Modifier_Ricochet_Proc> m_hRicochetModifier;
        char m_hRicochetModifier[0x18]; // 0xb08        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_Ricochet because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_Ricochet) == 0xb20);
};
