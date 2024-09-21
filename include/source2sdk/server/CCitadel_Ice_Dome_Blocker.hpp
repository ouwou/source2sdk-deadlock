#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x9b0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flTurnSolidTime"
    #pragma pack(push, 1)
    class CCitadel_Ice_Dome_Blocker : public server::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTurnSolidTime; // 0x9a8        
        [[maybe_unused]] std::uint8_t pad_0x9ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ice_Dome_Blocker because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ice_Dome_Blocker) == 0x9b0);
};
