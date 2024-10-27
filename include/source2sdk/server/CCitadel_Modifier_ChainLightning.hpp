#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseBulletPreRollProc.hpp"
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
    // Size: 0x190
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ChainLightning : public server::CCitadel_Modifier_BaseBulletPreRollProc
    {
    public:
        entity2::GameTime_t m_flNextProcTime; // 0x188        
        [[maybe_unused]] std::uint8_t pad_0x18c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ChainLightning because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ChainLightning) == 0x190);
};
