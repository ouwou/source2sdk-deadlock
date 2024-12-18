#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_BaseEventProcVData.hpp"
#include "source2sdk/client/CCitadel_Modifier_Base_Buildup.hpp"
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
    // Size: 0x690
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_FearWatcherVData : public client::CCitadel_Modifier_BaseEventProcVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_BuildupProcModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuildupProcModifier;
        char m_BuildupProcModifier[0x10]; // 0x660        
        // m_BuildUpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadel_Modifier_Base_Buildup> m_BuildUpModifier;
        char m_BuildUpModifier[0x10]; // 0x670        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_ExplodeSound; // 0x680        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_FearWatcherVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_FearWatcherVData) == 0x690);
};
