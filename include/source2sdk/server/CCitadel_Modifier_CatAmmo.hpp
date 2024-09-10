#pragma once
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"
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
    // Size: 0x220
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_CatAmmo : public server::CCitadel_Modifier_BaseEventProc
    {
    public:
        float m_flBuildupPerBullet; // 0x170        
        [[maybe_unused]] std::uint8_t pad_0x174[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_CatAmmo because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_CatAmmo) == 0x220);
};
