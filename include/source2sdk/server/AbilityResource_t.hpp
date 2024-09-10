#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x20
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flLatchTime"
    // static metadata: MNetworkVarNames "float m_flLatchValue"
    #pragma pack(push, 1)
    struct AbilityResource_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        float m_flCurrentValue; // 0x8        
        float m_flPrevRegenRate; // 0xc        
        float m_flMaxValue; // 0x10        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLatchTime; // 0x14        
        // metadata: MNetworkEnable
        float m_flLatchValue; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AbilityResource_t, m_flCurrentValue) == 0x8);
    static_assert(offsetof(AbilityResource_t, m_flPrevRegenRate) == 0xc);
    static_assert(offsetof(AbilityResource_t, m_flMaxValue) == 0x10);
    static_assert(offsetof(AbilityResource_t, m_flLatchTime) == 0x14);
    static_assert(offsetof(AbilityResource_t, m_flLatchValue) == 0x18);
    
    static_assert(sizeof(AbilityResource_t) == 0x20);
};
