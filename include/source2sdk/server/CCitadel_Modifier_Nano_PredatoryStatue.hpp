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
    // Size: 0x310
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Nano_PredatoryStatue : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x34]; // 0xc8
        entity2::GameTime_t m_GameTimeEnabled; // 0xfc        
        entity2::GameTime_t m_LastCatInAreaTime; // 0x100        
        bool m_bIsAttacking; // 0x104        
        [[maybe_unused]] std::uint8_t pad_0x105[0x3]; // 0x105
        int32_t m_iTargetID; // 0x108        
        [[maybe_unused]] std::uint8_t pad_0x10c[0x204];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Nano_PredatoryStatue because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Nano_PredatoryStatue) == 0x310);
};
