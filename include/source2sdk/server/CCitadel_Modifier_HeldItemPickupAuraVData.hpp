#pragma once
#include "source2sdk/server/CCitadelModifierAuraVData.hpp"
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
    // Size: 0x658
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_HeldItemPickupAuraVData : public server::CCitadelModifierAuraVData
    {
    public:
        // m_strFilterAbilityName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<4> m_strFilterAbilityName;
        char m_strFilterAbilityName[0x10]; // 0x648        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HeldItemPickupAuraVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_HeldItemPickupAuraVData) == 0x658);
};
