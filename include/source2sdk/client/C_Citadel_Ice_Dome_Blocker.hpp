#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flTurnSolidTime"
    #pragma pack(push, 1)
    class C_Citadel_Ice_Dome_Blocker : public client::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTurnSolidTime; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb4c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Ice_Dome_Blocker because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Ice_Dome_Blocker) == 0xb50);
};
