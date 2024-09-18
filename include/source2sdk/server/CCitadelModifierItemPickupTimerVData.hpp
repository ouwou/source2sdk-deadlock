#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x620
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifierItemPickupTimerVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Timers"
        float m_TimerToSilence; // 0x608        
        float m_SilenceDuration; // 0x60c        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SilenceModifier;
        char m_SilenceModifier[0x10]; // 0x610        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierItemPickupTimerVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifierItemPickupTimerVData) == 0x620);
};
