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
    // Size: 0x308
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_StormCloud : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x8]; // 0xc8
        float m_flDamageInterval; // 0xd0        
        bool m_bGrowing; // 0xd4        
        [[maybe_unused]] std::uint8_t pad_0xd5[0x3]; // 0xd5
        entity2::GameTime_t m_flLastDamageWaveTime; // 0xd8        
        int32_t m_nNumPlayersKilled; // 0xdc        
        entity2::GameTime_t m_flNextRandomLightningStrike; // 0xe0        
        entity2::GameTime_t m_flStartTime; // 0xe4        
        float m_flRadiusIncrementPerSecond; // 0xe8        
        Vector m_vCastPosition; // 0xec        
        bool m_bFiredEndingSoonSound; // 0xf8        
        [[maybe_unused]] std::uint8_t pad_0xf9[0x3]; // 0xf9
        int32_t m_nLastTickForLightningCenterCalc; // 0xfc        
        Vector m_vecLightningCenter; // 0x100        
        client::SatVolumeIndex_t m_nSatVolumeIndex; // 0x10c        
        [[maybe_unused]] std::uint8_t pad_0x110[0x1f8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_StormCloud because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_StormCloud) == 0x308);
};
