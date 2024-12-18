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
    // Size: 0xc98
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Operative_Blindside : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vLaunchPosition; // 0xaf8        
        QAngle m_qLaunchAngle; // 0xb04        
        [[maybe_unused]] std::uint8_t pad_0xb10[0x188];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Operative_Blindside because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Operative_Blindside) == 0xc98);
};