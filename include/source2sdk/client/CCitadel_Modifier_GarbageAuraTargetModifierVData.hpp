#pragma once
#include "source2sdk/client/CCitadel_Modifier_StunnedVData.hpp"
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
    // Size: 0x728
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_GarbageAuraTargetModifierVData : public client::CCitadel_Modifier_StunnedVData
    {
    public:
        float m_flOuterSpeedScale; // 0x710        
        float m_flSpeedScaleBias; // 0x714        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_TargetLoopingSound; // 0x718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_GarbageAuraTargetModifierVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_GarbageAuraTargetModifierVData) == 0x728);
};
