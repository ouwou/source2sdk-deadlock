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
    // Size: 0x108
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_WreckerScrapBlastDebuff : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x38]; // 0xc8
        float m_flEnemyMoveSlow; // 0x100        
        [[maybe_unused]] std::uint8_t pad_0x104[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_WreckerScrapBlastDebuff because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_WreckerScrapBlastDebuff) == 0x108);
};
