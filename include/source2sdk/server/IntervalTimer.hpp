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
    // Size: 0x10
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_timestamp"
    // static metadata: MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
    #pragma pack(push, 1)
    class IntervalTimer
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        entity2::GameTime_t m_timestamp; // 0x8        
        // metadata: MNetworkEnable
        WorldGroupId_t m_nWorldGroupId; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(IntervalTimer, m_timestamp) == 0x8);
    static_assert(offsetof(IntervalTimer, m_nWorldGroupId) == 0xc);
    
    static_assert(sizeof(IntervalTimer) == 0x10);
};
