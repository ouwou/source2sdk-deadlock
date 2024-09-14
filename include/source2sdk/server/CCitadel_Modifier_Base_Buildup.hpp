#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Base_Buildup : public server::CCitadelModifier
    {
    public:
        entity2::GameTime_t m_flLastBuildupAppliedTime; // 0xc0        
        float m_flDelayedDieTimeRemaining; // 0xc4        
        bool m_bInDelayTime; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xc9[0x3]; // 0xc9
        float m_flBuildUpDecayDelayFromWeaponCycleTime; // 0xcc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Base_Buildup because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Base_Buildup) == 0xd0);
};
