#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xea0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_RocketBarrage : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0x1f8]; // 0xc80
        float m_flCurrentTimeScale; // 0xe78        
        Vector m_vecAimPos; // 0xe7c        
        Vector m_vecAimVel; // 0xe88        
        entity2::GameTime_t m_flLastUpdateTime; // 0xe94        
        [[maybe_unused]] std::uint8_t pad_0xe98[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_RocketBarrage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_RocketBarrage) == 0xea0);
};
