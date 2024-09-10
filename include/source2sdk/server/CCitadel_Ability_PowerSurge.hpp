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
    // Size: 0xb88
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_PowerSurge : public server::CCitadelBaseAbility
    {
    public:
        entity2::GameTime_t m_flNextProcTime; // 0xad8        
        float m_flBaseCooldown; // 0xadc        
        [[maybe_unused]] std::uint8_t pad_0xae0[0xa8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PowerSurge because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_PowerSurge) == 0xb88);
};
