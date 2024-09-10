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
    // Size: 0x150
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Uppercutted : public server::CCitadelModifier
    {
    public:
        Vector m_vecFromBebop; // 0xc8        
        float m_flDamage; // 0xd4        
        bool m_bExplodeOnLand; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xd9[0x77];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Uppercutted because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Uppercutted) == 0x150);
};
