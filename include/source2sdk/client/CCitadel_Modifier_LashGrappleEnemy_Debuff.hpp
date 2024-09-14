#pragma once
#include "source2sdk/client/CCitadel_Modifier_Stunned.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x2a8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_LashGrappleEnemy_Debuff : public client::CCitadel_Modifier_Stunned
    {
    public:
        Vector m_vCrashDir; // 0xc8        
        Vector m_vLiftTarget; // 0xd4        
        entity2::GameTime_t m_flStartTime; // 0xe0        
        bool m_bCrashingDown; // 0xe4        
        [[maybe_unused]] std::uint8_t pad_0xe5[0x1c3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_LashGrappleEnemy_Debuff because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_LashGrappleEnemy_Debuff) == 0x2a8);
};
