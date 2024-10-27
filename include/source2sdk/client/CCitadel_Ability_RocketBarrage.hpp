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
    // Size: 0xeb8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_RocketBarrage : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x1f8]; // 0xc98
        float m_flCurrentTimeScale; // 0xe90        
        Vector m_vecAimPos; // 0xe94        
        Vector m_vecAimVel; // 0xea0        
        entity2::GameTime_t m_flLastUpdateTime; // 0xeac        
        [[maybe_unused]] std::uint8_t pad_0xeb0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_RocketBarrage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_RocketBarrage) == 0xeb8);
};
