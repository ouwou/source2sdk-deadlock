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
    // Size: 0xbc8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bFlying"
    // static metadata: MNetworkVarNames "bool m_bSummoning"
    #pragma pack(push, 1)
    class CCitadel_Upgrade_MagicCarpet : public server::CCitadel_Item
    {
    public:
        entity2::GameTime_t m_flFlyingStartTime; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb14[0xac]; // 0xb14
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bFlying; // 0xbc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bSummoning; // 0xbc1        
        [[maybe_unused]] std::uint8_t pad_0xbc2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Upgrade_MagicCarpet because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Upgrade_MagicCarpet) == 0xbc8);
};
