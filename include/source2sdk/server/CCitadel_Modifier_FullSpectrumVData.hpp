#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseEventProcVData.hpp"
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
    // Size: 0x680
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_FullSpectrumVData : public server::CCitadel_Modifier_BaseEventProcVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x660        
        // m_BonusDamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BonusDamageModifier;
        char m_BonusDamageModifier[0x10]; // 0x670        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_FullSpectrumVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_FullSpectrumVData) == 0x680);
};
