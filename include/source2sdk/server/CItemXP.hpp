#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x840
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_timeLaunch"
    // static metadata: MNetworkVarNames "GameTime_t m_flAttackableTime"
    #pragma pack(push, 1)
    class CItemXP : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7b8[0x54]; // 0x7b8
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnLaunchTimeChanged"
        entity2::GameTime_t m_timeLaunch; // 0x80c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flAttackableTime; // 0x810        
        [[maybe_unused]] std::uint8_t pad_0x814[0x2c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemXP because it is not a standard-layout class
    static_assert(sizeof(CItemXP) == 0x840);
};
