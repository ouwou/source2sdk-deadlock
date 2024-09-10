#pragma once
#include "source2sdk/server/CBaseModifier.hpp"
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
    // Size: 0xc8
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CCitadelModifier : public server::CBaseModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x90[0x38];
        // Datamap fields:
        // void m_pVecAbilityValues; // 0xa0
        // float m_flEffectiveness; // 0xa8
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    
    static_assert(sizeof(CCitadelModifier) == 0xc8);
};
