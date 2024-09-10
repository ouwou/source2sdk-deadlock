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
    // Size: 0x30
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct HealingReceivedSounds_t
    {
    public:
        // metadata: MPropertyDescription "While healing in the base"
        CSoundEventName m_strHealingInBaseLoop; // 0x0        
        // metadata: MPropertyDescription "When base healing has topped off the player"
        CSoundEventName m_strHealingInBaseToppedOff; // 0x10        
        // metadata: MPropertyDescription "A direct healing ability was applied to us"
        CSoundEventName m_strDirectHealing; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HealingReceivedSounds_t, m_strHealingInBaseLoop) == 0x0);
    static_assert(offsetof(HealingReceivedSounds_t, m_strHealingInBaseToppedOff) == 0x10);
    static_assert(offsetof(HealingReceivedSounds_t, m_strDirectHealing) == 0x20);
    
    static_assert(sizeof(HealingReceivedSounds_t) == 0x30);
};
