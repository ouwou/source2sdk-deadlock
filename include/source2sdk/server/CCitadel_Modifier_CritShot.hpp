#pragma once
#include "source2sdk/client/ShotID_t.hpp"
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
    // Size: 0x238
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_CritShot : public server::CCitadel_Modifier_BaseBulletPreRollProc
    {
    public:
        client::ShotID_t m_iShotID; // 0x188        
        [[maybe_unused]] std::uint8_t pad_0x18c[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_CritShot because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_CritShot) == 0x238);
};
