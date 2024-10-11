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
    // Size: 0xcc0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bHoldingBall"
    #pragma pack(push, 1)
    class CCitadel_Ability_WreckingBall : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0x38]; // 0xc80
        // metadata: MNetworkEnable
        bool m_bHoldingBall; // 0xcb8        
        [[maybe_unused]] std::uint8_t pad_0xcb9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_WreckingBall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_WreckingBall) == 0xcc0);
};
