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
    // Size: 0xe18
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Thumper_1 : public client::C_CitadelBaseAbility
    {
    public:
        Vector m_vecAimPos; // 0xc70        
        Vector m_vecAimNormal; // 0xc7c        
        float m_flPushForce; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc8c[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Thumper_1 because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Thumper_1) == 0xe18);
};
