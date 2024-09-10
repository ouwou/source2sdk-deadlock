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
    // Size: 0x1c0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ChargePullEnemy : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0xe0]; // 0xc8
        Vector m_vecOffsetDir; // 0x1a8        
        float m_flTackleRadius; // 0x1b4        
        float m_flPullTargetSpeed; // 0x1b8        
        [[maybe_unused]] std::uint8_t pad_0x1bc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ChargePullEnemy because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_ChargePullEnemy) == 0x1c0);
};
