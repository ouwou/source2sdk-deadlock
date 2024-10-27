#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_InvisVData.hpp"
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
    // Size: 0x8f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Slork_Invis_VData : public client::CCitadel_Modifier_InvisVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_AmbushModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AmbushModifier;
        char m_AmbushModifier[0x10]; // 0x8d0        
        // m_VisibleModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_VisibleModifier;
        char m_VisibleModifier[0x10]; // 0x8e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Slork_Invis_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Slork_Invis_VData) == 0x8f0);
};
