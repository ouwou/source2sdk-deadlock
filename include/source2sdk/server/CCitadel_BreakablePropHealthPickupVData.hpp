#pragma once
#include "source2sdk/server/CCitadel_BreakablePropPickupVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x320
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_BreakablePropHealthPickupVData : public server::CCitadel_BreakablePropPickupVData
    {
    public:
        // metadata: MPropertyFriendlyName "Max health heal percent"
        // metadata: MPropertyDescription "Between 0 and 1 (0 and 100%), what percent of max health should a pickup heal"
        float m_flHealMaxHealthPercent; // 0x318        
        [[maybe_unused]] std::uint8_t pad_0x31c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_BreakablePropHealthPickupVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_BreakablePropHealthPickupVData) == 0x320);
};
