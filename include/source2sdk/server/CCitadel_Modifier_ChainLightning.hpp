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
    // Size: 0x1c8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ChainLightning : public server::CCitadel_Modifier_BaseBulletPreRollProc
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x188[0x38]; // 0x188
        entity2::GameTime_t m_flNextProcTime; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ChainLightning because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ChainLightning) == 0x1c8);
};
