#pragma once
#include "source2sdk/server/CCitadel_Modifier_StunnedVData.hpp"
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
    // Size: 0x728
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_UltCombo_TargetVData : public server::CCitadel_Modifier_StunnedVData
    {
    public:
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flTargetPosDistance; // 0x710        
        float m_flTargetPosRange; // 0x714        
        float m_flPullSpeedMin; // 0x718        
        float m_flPullSpeedMax; // 0x71c        
        float m_flPullDistanceMin; // 0x720        
        float m_flPullDistanceMax; // 0x724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_UltCombo_TargetVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_UltCombo_TargetVData) == 0x728);
};
