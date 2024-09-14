#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xd08
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_RocketBarrage : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x1f8]; // 0xae8
        float m_flCurrentTimeScale; // 0xce0        
        Vector m_vecAimPos; // 0xce4        
        Vector m_vecAimVel; // 0xcf0        
        entity2::GameTime_t m_flLastUpdateTime; // 0xcfc        
        [[maybe_unused]] std::uint8_t pad_0xd00[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_RocketBarrage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_RocketBarrage) == 0xd08);
};
