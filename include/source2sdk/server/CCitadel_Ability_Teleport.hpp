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
    // Size: 0xb20
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Teleport : public server::CCitadelBaseAbility
    {
    public:
        bool m_bTeleportingToTarget; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xaf9[0x3]; // 0xaf9
        Vector m_vTargetPosition; // 0xafc        
        QAngle m_vTargetAngles; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb14[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Teleport because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Teleport) == 0xb20);
};
