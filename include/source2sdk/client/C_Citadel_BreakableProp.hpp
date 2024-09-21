#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
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
    // Size: 0xb80
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkVarNames "int m_nHitIndex"
    #pragma pack(push, 1)
    class C_Citadel_BreakableProp : public client::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nHitIndex; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb4c[0x34];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_BreakableProp because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_BreakableProp) == 0xb80);
};
