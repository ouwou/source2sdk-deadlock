#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierAuraVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x688
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_TimeWall_AuraVData : public client::CCitadelModifierAuraVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x678        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TimeWall_AuraVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TimeWall_AuraVData) == 0x688);
};
