#pragma once
#include "source2sdk/client/CCitadel_Ability_Melee_Base.hpp"
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
    // Size: 0xf50
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Uppercut : public client::CCitadel_Ability_Melee_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd18[0x230]; // 0xd18
        bool m_bShouldUseResources; // 0xf48        
        [[maybe_unused]] std::uint8_t pad_0xf49[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Uppercut because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Uppercut) == 0xf50);
};
