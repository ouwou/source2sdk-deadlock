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
    // Size: 0xbd8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nPlayersHit"
    #pragma pack(push, 1)
    class CCitadel_Ability_StickyBomb : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x8]; // 0xae8
        // metadata: MNetworkEnable
        int32_t m_nPlayersHit; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf4[0xe4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_StickyBomb because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_StickyBomb) == 0xbd8);
};
