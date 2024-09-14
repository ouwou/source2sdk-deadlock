#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xc98
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Teleport : public client::C_CitadelBaseAbility
    {
    public:
        bool m_bTeleportingToTarget; // 0xc70        
        [[maybe_unused]] std::uint8_t pad_0xc71[0x3]; // 0xc71
        Vector m_vTargetPosition; // 0xc74        
        QAngle m_vTargetAngles; // 0xc80        
        [[maybe_unused]] std::uint8_t pad_0xc8c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Teleport because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Teleport) == 0xc98);
};
