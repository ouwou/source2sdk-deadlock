#pragma once
#include "source2sdk/server/CCitadel_BreakablePropPickup.hpp"
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
    // Size: 0xa60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iGoldReward"
    #pragma pack(push, 1)
    class CCitadel_BreakablePropGoldPickup : public server::CCitadel_BreakablePropPickup
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iGoldReward; // 0xa58        
        [[maybe_unused]] std::uint8_t pad_0xa5c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_BreakablePropGoldPickup because it is not a standard-layout class
    static_assert(sizeof(CCitadel_BreakablePropGoldPickup) == 0xa60);
};
