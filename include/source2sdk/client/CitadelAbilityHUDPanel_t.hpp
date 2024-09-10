#pragma once
#include "source2sdk/client/CitadelAbilityHUDElementButtonHint_t.hpp"
#include "source2sdk/client/CitadelAbilityHUDElement_t.hpp"
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
    // Size: 0x38
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelAbilityHUDPanel_t
    {
    public:
        // m_vecHUDElements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CitadelAbilityHUDElement_t> m_vecHUDElements;
        char m_vecHUDElements[0x18]; // 0x0        
        // m_vecButtonHints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CitadelAbilityHUDElementButtonHint_t> m_vecButtonHints;
        char m_vecButtonHints[0x18]; // 0x18        
        bool m_bForceDrawDefaultCastBars; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x31[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelAbilityHUDPanel_t, m_vecHUDElements) == 0x0);
    static_assert(offsetof(CitadelAbilityHUDPanel_t, m_vecButtonHints) == 0x18);
    static_assert(offsetof(CitadelAbilityHUDPanel_t, m_bForceDrawDefaultCastBars) == 0x30);
    
    static_assert(sizeof(CitadelAbilityHUDPanel_t) == 0x38);
};
