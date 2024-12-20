#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadel_Item_BubbleVData.hpp"
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
    // Size: 0x16c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Item_Stasis_BombVData : public client::CCitadel_Item_BubbleVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_AuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_AuraModifier;
        char m_AuraModifier[0x10]; // 0x16b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_Stasis_BombVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_Stasis_BombVData) == 0x16c0);
};
