#pragma once
#include "source2sdk/client/CCitadel_Item.hpp"
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
    // Size: 0xc90
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flEndTime"
    #pragma pack(push, 1)
    class CCitadel_Item_Bubble : public client::CCitadel_Item
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flEndTime; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc8c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_Bubble because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_Bubble) == 0xc90);
};
