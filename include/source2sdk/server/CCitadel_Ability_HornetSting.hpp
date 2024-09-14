#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CitadelAbilityProjectileCreateInfo_t.hpp"
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
    // Size: 0xcc0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_HornetSting : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x70]; // 0xae8
        server::CitadelAbilityProjectileCreateInfo_t m_projInfo; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xba8[0x118];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HornetSting because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HornetSting) == 0xcc0);
};
