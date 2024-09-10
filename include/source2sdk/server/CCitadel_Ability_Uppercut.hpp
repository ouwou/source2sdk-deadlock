#pragma once
#include "source2sdk/server/CCitadel_Ability_Melee_Base.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xda0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Uppercut : public server::CCitadel_Ability_Melee_Base
    {
    public:
        CUtlStringToken m_TypeIDStickyBombAttached; // 0xb60        
        [[maybe_unused]] std::uint8_t pad_0xb64[0x234]; // 0xb64
        bool m_bShouldUseResources; // 0xd98        
        [[maybe_unused]] std::uint8_t pad_0xd99[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Uppercut because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Uppercut) == 0xda0);
};