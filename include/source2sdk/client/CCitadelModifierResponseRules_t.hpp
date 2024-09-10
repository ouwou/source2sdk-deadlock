#pragma once
#include "source2sdk/client/CCitadelModifierResponseRulesFilterType_t.hpp"
#include "source2sdk/client/CCitadelModifierSpeaker_t.hpp"
#include "source2sdk/client/CitadelConcept_t.hpp"
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
    struct CCitadelModifierResponseRules_t
    {
    public:
        client::CitadelConcept_t m_nConcept; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_Criteria has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CUtlString,CUtlString> m_Criteria;
        char m_Criteria[0x28]; // 0x8        
        client::CCitadelModifierResponseRulesFilterType_t m_nFilterType; // 0x30        
        client::CCitadelModifierSpeaker_t m_nSpeakerType; // 0x34        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadelModifierResponseRules_t, m_nConcept) == 0x0);
    static_assert(offsetof(CCitadelModifierResponseRules_t, m_Criteria) == 0x8);
    static_assert(offsetof(CCitadelModifierResponseRules_t, m_nFilterType) == 0x30);
    static_assert(offsetof(CCitadelModifierResponseRules_t, m_nSpeakerType) == 0x34);
    
    static_assert(sizeof(CCitadelModifierResponseRules_t) == 0x38);
};
