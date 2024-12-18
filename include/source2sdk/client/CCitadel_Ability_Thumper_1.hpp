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
    // Size: 0xe40
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Thumper_1 : public client::C_CitadelBaseAbility
    {
    public:
        Vector m_vecAimPos; // 0xc98        
        Vector m_vecAimNormal; // 0xca4        
        float m_flPushForce; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcb4[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Thumper_1 because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Thumper_1) == 0xe40);
};
