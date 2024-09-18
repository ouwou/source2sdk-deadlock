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
    // Size: 0x700
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_VacuumAuraTargetModifierVData : public client::CCitadel_Modifier_StunnedVData
    {
    public:
        float m_flOuterSpeedScale; // 0x6e8        
        float m_flSpeedScaleBias; // 0x6ec        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_TargetLoopingSound; // 0x6f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_VacuumAuraTargetModifierVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_VacuumAuraTargetModifierVData) == 0x700);
};
