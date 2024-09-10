#pragma once
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flTime"
    #pragma pack(push, 1)
    class CCitadelAutoScaledTime
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTime; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0xc];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadelAutoScaledTime, m_flTime) == 0x8);
    
    static_assert(sizeof(CCitadelAutoScaledTime) == 0x18);
};
