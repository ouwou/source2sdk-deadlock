#pragma once
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
    // Size: 0x350
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_RocketBarrageVolley : public server::CCitadelModifier
    {
    public:
        float m_flFiringInterval; // 0xc0        
        entity2::GameTime_t m_flCastTime; // 0xc4        
        entity2::GameTime_t m_flNextRocketTime; // 0xc8        
        int32_t m_nGrenadesLeft; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xd0[0x280];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_RocketBarrageVolley because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_RocketBarrageVolley) == 0x350);
};
