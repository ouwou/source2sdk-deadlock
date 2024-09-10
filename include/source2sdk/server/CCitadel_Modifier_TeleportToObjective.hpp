#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_TeleportToObjective : public server::CCitadelModifier
    {
    public:
        Vector m_vDest; // 0xc8        
        QAngle m_angDestAngles; // 0xd4        
        Vector m_vDestVelocity; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TeleportToObjective because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_TeleportToObjective) == 0xf0);
};
