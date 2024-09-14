#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2e8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_StormCloud : public client::CCitadelModifier
    {
    public:
        entity2::GameTime_t m_flNextRandomLightningStrike; // 0xc0        
        entity2::GameTime_t m_flStartTime; // 0xc4        
        float m_flRadiusIncrementPerSecond; // 0xc8        
        Vector m_vCastPosition; // 0xcc        
        bool m_bFiredEndingSoonSound; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xd9[0x3]; // 0xd9
        int32_t m_nLastTickForLightningCenterCalc; // 0xdc        
        Vector m_vecLightningCenter; // 0xe0        
        client::SatVolumeIndex_t m_nSatVolumeIndex; // 0xec        
        [[maybe_unused]] std::uint8_t pad_0xf0[0x1f8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_StormCloud because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_StormCloud) == 0x2e8);
};
