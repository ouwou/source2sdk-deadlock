#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0xd8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Basic_RangedArmorBonus : public client::CCitadelModifier
    {
    public:
        float m_flBulletResistancePctMin; // 0xc0        
        float m_flBulletResistancePctMax; // 0xc4        
        float m_flRangeMin; // 0xc8        
        float m_flRangeMax; // 0xcc        
        float m_flInvulnRange; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Basic_RangedArmorBonus because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Basic_RangedArmorBonus) == 0xd8);
};
