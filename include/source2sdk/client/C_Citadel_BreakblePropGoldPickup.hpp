#pragma once
#include "source2sdk/client/C_Citadel_BreakblePropPickup.hpp"
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
    // Standard-layout class: false
    // Size: 0xb70
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iGoldReward"
    #pragma pack(push, 1)
    class C_Citadel_BreakblePropGoldPickup : public client::C_Citadel_BreakblePropPickup
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iGoldReward; // 0xb68        
        [[maybe_unused]] std::uint8_t pad_0xb6c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_BreakblePropGoldPickup because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_BreakblePropGoldPickup) == 0xb70);
};
