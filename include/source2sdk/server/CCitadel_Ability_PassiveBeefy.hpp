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
    // Size: 0xc58
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_PassiveBeefy : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x18]; // 0xae8
        entity2::GameTime_t m_flLastHealTime; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x154];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PassiveBeefy because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PassiveBeefy) == 0xc58);
};
