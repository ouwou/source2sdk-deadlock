#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_TeleportToObjective : public client::CCitadelModifier
    {
    public:
        Vector m_vDest; // 0xc0        
        QAngle m_angDestAngles; // 0xcc        
        Vector m_vDestVelocity; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xe4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TeleportToObjective because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TeleportToObjective) == 0xe8);
};
