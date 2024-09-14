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
    // Size: 0x300
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Nano_PredatoryStatue : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x2c]; // 0xc0
        entity2::GameTime_t m_GameTimeEnabled; // 0xec        
        entity2::GameTime_t m_LastCatInAreaTime; // 0xf0        
        bool m_bIsAttacking; // 0xf4        
        [[maybe_unused]] std::uint8_t pad_0xf5[0x3]; // 0xf5
        int32_t m_iTargetID; // 0xf8        
        [[maybe_unused]] std::uint8_t pad_0xfc[0x204];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Nano_PredatoryStatue because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Nano_PredatoryStatue) == 0x300);
};
