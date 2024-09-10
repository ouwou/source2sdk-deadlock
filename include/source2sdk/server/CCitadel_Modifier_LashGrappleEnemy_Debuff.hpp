#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"
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
    // Size: 0x2b0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_LashGrappleEnemy_Debuff : public server::CCitadel_Modifier_Stunned
    {
    public:
        Vector m_vCrashDir; // 0xd0        
        Vector m_vLiftTarget; // 0xdc        
        entity2::GameTime_t m_flStartTime; // 0xe8        
        bool m_bCrashingDown; // 0xec        
        [[maybe_unused]] std::uint8_t pad_0xed[0x1c3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_LashGrappleEnemy_Debuff because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_LashGrappleEnemy_Debuff) == 0x2b0);
};
