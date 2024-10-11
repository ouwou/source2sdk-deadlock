#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xde0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nPlayersHit"
    #pragma pack(push, 1)
    class CCitadel_Ability_StickyBomb : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0x8]; // 0xc80
        // metadata: MNetworkEnable
        int32_t m_nPlayersHit; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc8c[0x154];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_StickyBomb because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_StickyBomb) == 0xde0);
};
