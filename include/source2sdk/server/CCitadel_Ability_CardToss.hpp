#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CCitadel_Ability_CardToss__Card_t.hpp"
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
    // Size: 0xd88
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bCardIsFlying"
    #pragma pack(push, 1)
    class CCitadel_Ability_CardToss : public server::CCitadelBaseAbility
    {
    public:
        // m_vecCards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CCitadel_Ability_CardToss__Card_t> m_vecCards;
        char m_vecCards[0x18]; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xb00[0x280]; // 0xb00
        // metadata: MNetworkEnable
        bool m_bCardIsFlying; // 0xd80        
        [[maybe_unused]] std::uint8_t pad_0xd81[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_CardToss because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_CardToss) == 0xd88);
};
