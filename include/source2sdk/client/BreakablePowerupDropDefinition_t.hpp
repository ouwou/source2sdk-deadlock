#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct BreakablePowerupDropDefinition_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyDescription "What does this drop?"
        // m_sPickup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<0> m_sPickup;
        char m_sPickup[0x10]; // 0x8        
        // metadata: MPropertyDescription "What's the weight of this drop?"
        float m_flPickupWeight; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(BreakablePowerupDropDefinition_t, m_sPickup) == 0x8);
    static_assert(offsetof(BreakablePowerupDropDefinition_t, m_flPickupWeight) == 0x18);
    
    static_assert(sizeof(BreakablePowerupDropDefinition_t) == 0x20);
};
