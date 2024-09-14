#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x310
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Nano_PredatoryStatue : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x40]; // 0xc0
        entity2::GameTime_t m_GameTimeEnabled; // 0x100        
        entity2::GameTime_t m_LastCatInAreaTime; // 0x104        
        bool m_bIsAttacking; // 0x108        
        [[maybe_unused]] std::uint8_t pad_0x109[0x3]; // 0x109
        int32_t m_iTargetID; // 0x10c        
        [[maybe_unused]] std::uint8_t pad_0x110[0x200];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Nano_PredatoryStatue because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Nano_PredatoryStatue) == 0x310);
};
