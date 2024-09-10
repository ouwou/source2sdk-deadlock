#pragma once
#include "source2sdk/client/ECitadelAbilityHUDElementType_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x30
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyArrayElementNameKey "m_strContext"
    #pragma pack(push, 1)
    struct CitadelAbilityHUDElement_t
    {
    public:
        client::ECitadelAbilityHUDElementType_t m_eType; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString m_strContext; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x10[0x8]; // 0x10
        // metadata: MPropertyDescription "Space separated set of classes to add to the panel (ex: "medium superCool noMiddle""
        CUtlString m_strAdditionalClasses; // 0x18        
        // metadata: MPropertyCustomFGDType "panorama_layout"
        // metadata: MPropertySuppressExpr "m_eType != CITADEL_ABILITY_HUD_ELEMENT_TYPE_PROGRESS"
        CUtlString m_Layout; // 0x20        
        // metadata: MPropertySuppressExpr "m_eType != CITADEL_ABILITY_HUD_ELEMENT_TYPE_PROGRESS"
        bool m_bReverseProgress; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x29[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelAbilityHUDElement_t, m_eType) == 0x0);
    static_assert(offsetof(CitadelAbilityHUDElement_t, m_strContext) == 0x8);
    static_assert(offsetof(CitadelAbilityHUDElement_t, m_strAdditionalClasses) == 0x18);
    static_assert(offsetof(CitadelAbilityHUDElement_t, m_Layout) == 0x20);
    static_assert(offsetof(CitadelAbilityHUDElement_t, m_bReverseProgress) == 0x28);
    
    static_assert(sizeof(CitadelAbilityHUDElement_t) == 0x30);
};
