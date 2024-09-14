#pragma once
#include "source2sdk/client/EKnockDownTypes.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Knockdown : public server::CCitadel_Modifier_Stunned
    {
    public:
        QAngle m_angStunAngles; // 0xc8        
        client::EKnockDownTypes m_ePreferredKnockdownType; // 0xd4        
        bool m_bForceTakePreferred; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xd9[0x3]; // 0xd9
        entity2::GameTime_t m_flGetUpAnimTime; // 0xdc        
        bool m_bGetUpCamSeqStarted; // 0xe0        
        bool m_bOnGroundDuration; // 0xe1        
        [[maybe_unused]] std::uint8_t pad_0xe2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Knockdown because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Knockdown) == 0xe8);
};
