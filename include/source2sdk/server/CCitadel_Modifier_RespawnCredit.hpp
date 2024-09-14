#pragma once
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
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_RespawnCredit : public server::CCitadelModifier
    {
    public:
        bool m_bActivated; // 0xc0        
        bool m_bSpokeAboutToExpire; // 0xc1        
        [[maybe_unused]] std::uint8_t pad_0xc2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_RespawnCredit because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_RespawnCredit) == 0xc8);
};
