#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x628
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_StatStealBaseVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_StatStolenDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_StatStolenDebuffModifier;
        char m_StatStolenDebuffModifier[0x10]; // 0x608        
        // m_StatStolenBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_StatStolenBuffModifier;
        char m_StatStolenBuffModifier[0x10]; // 0x618        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_StatStealBaseVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_StatStealBaseVData) == 0x628);
};
