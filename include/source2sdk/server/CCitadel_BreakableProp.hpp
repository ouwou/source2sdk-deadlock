#pragma once
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
    // Size: 0x9b8
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkVarNames "int m_nHitIndex"
    #pragma pack(push, 1)
    class CCitadel_BreakableProp : public server::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nHitIndex; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_BreakableProp because it is not a standard-layout class
    static_assert(sizeof(CCitadel_BreakableProp) == 0x9b8);
};
