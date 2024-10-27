#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x628
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Succor_MoveVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_PullSound; // 0x608        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flPullSpeedMin; // 0x618        
        float m_flPullSpeedMax; // 0x61c        
        float m_flPullDistanceMin; // 0x620        
        float m_flPullDistanceMax; // 0x624        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Succor_MoveVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Succor_MoveVData) == 0x628);
};
