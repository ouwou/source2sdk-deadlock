#pragma once
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/ECitadelHintFeature.hpp"
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
    // Size: 0x1558
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBaseTriggerAbilityVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyDescription "Which ability to fire a MODIFIER_EVENT_ABILITY_TRIGGER_ACTIVATED event to when this ability is triggered"
        // m_AbilityToTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<4> m_AbilityToTrigger;
        char m_AbilityToTrigger[0x10]; // 0x1540        
        // metadata: MPropertyDescription "The mimumum amount of time after this ability has become active before the trigger can activate"
        float m_flMinCancelTime; // 0x1550        
        // metadata: MPropertyDescription "Which lesson to associate with activating this ability"
        client::ECitadelHintFeature m_eHintFeatureToMarkUsedOnTrigger; // 0x1554        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseTriggerAbilityVData because it is not a standard-layout class
    static_assert(sizeof(CBaseTriggerAbilityVData) == 0x1558);
};
