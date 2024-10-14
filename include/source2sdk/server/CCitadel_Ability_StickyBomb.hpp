#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Size: 0xc58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nPlayersHit"
    #pragma pack(push, 1)
    class CCitadel_Ability_StickyBomb : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x8]; // 0xaf8
        // metadata: MNetworkEnable
        int32_t m_nPlayersHit; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x154];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_StickyBomb because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_StickyBomb) == 0xc58);
};
