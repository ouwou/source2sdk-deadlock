#pragma once
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
    // Size: 0x18
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct HeroAbilityResourceDef_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyDescription "Which snippet to use in the hud to display this resource?"
        CUtlString m_strHUDSnippetName; // 0x8        
        // metadata: MPropertyDescription "Localization token to use when failing to cast when out of this resource?"
        CUtlString m_strCantCastOutOfResourceToken; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HeroAbilityResourceDef_t, m_strHUDSnippetName) == 0x8);
    static_assert(offsetof(HeroAbilityResourceDef_t, m_strCantCastOutOfResourceToken) == 0x10);
    
    static_assert(sizeof(HeroAbilityResourceDef_t) == 0x18);
};
