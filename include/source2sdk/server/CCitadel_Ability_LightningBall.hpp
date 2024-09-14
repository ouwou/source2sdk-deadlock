#pragma once
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
    // Size: 0xc78
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_LightningBall : public server::CCitadelBaseAbility
    {
    public:
        float m_flInitialSpeed; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xaec[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_LightningBall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_LightningBall) == 0xc78);
};
