#pragma once
#include "source2sdk/client/CCitadel_Item.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_ArmorUpgrade_SpellShield : public client::CCitadel_Item
    {
    public:
        entity2::GameTime_t fl_mSpellShieldBreakTime; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc94[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_ArmorUpgrade_SpellShield because it is not a standard-layout class
    static_assert(sizeof(CCitadel_ArmorUpgrade_SpellShield) == 0xcd0);
};
