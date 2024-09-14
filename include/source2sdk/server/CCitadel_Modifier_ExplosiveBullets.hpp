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
    // Size: 0x200
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ExplosiveBullets : public server::CCitadel_Modifier_BaseBulletPreRollProc
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x188[0x70]; // 0x188
        client::ShotID_t m_BuffedShotId; // 0x1f8        
        [[maybe_unused]] std::uint8_t pad_0x1fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ExplosiveBullets because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ExplosiveBullets) == 0x200);
};
