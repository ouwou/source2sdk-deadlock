#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"
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
    // Size: 0xb48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_nFastFireEndTime"
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_BurstFire : public server::CCitadel_Item
    {
    public:
        // metadata: MNetworkEnable
        entity2::GameTime_t m_nFastFireEndTime; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_BurstFire because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_BurstFire) == 0xb48);
};
