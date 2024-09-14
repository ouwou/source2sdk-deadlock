#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x170
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime : public client::CCitadelModifier
    {
    public:
        entity2::GameTime_t m_flLastTickTime; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime) == 0x170);
};
