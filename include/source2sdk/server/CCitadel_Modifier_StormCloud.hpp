#pragma once
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x300
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_StormCloud : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x8]; // 0xc0
        float m_flDamageInterval; // 0xc8        
        bool m_bGrowing; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xcd[0x3]; // 0xcd
        entity2::GameTime_t m_flLastDamageWaveTime; // 0xd0        
        int32_t m_nNumPlayersKilled; // 0xd4        
        entity2::GameTime_t m_flNextRandomLightningStrike; // 0xd8        
        entity2::GameTime_t m_flStartTime; // 0xdc        
        float m_flRadiusIncrementPerSecond; // 0xe0        
        Vector m_vCastPosition; // 0xe4        
        bool m_bFiredEndingSoonSound; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0xf1[0x3]; // 0xf1
        int32_t m_nLastTickForLightningCenterCalc; // 0xf4        
        Vector m_vecLightningCenter; // 0xf8        
        client::SatVolumeIndex_t m_nSatVolumeIndex; // 0x104        
        [[maybe_unused]] std::uint8_t pad_0x108[0x1f8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_StormCloud because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_StormCloud) == 0x300);
};
