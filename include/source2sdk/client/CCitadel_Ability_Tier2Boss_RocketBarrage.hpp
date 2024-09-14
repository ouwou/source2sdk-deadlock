#pragma once
#include "source2sdk/client/CCitadelBaseAbilityServerOnly.hpp"
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
    // Size: 0xe00
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Tier2Boss_RocketBarrage : public client::CCitadelBaseAbilityServerOnly
    {
    public:
        int32_t m_nGrenadesLeft; // 0xc70        
        [[maybe_unused]] std::uint8_t pad_0xc74[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tier2Boss_RocketBarrage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tier2Boss_RocketBarrage) == 0xe00);
};
