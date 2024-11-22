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
    // Size: 0x700
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_UltCombo_TargetVData : public server::CCitadel_Modifier_StunnedVData
    {
    public:
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flTargetPosDistance; // 0x6e8        
        float m_flTargetPosRange; // 0x6ec        
        float m_flPullSpeedMin; // 0x6f0        
        float m_flPullSpeedMax; // 0x6f4        
        float m_flPullDistanceMin; // 0x6f8        
        float m_flPullDistanceMax; // 0x6fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_UltCombo_TargetVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_UltCombo_TargetVData) == 0x700);
};
