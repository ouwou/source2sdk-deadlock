#pragma once
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
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
    // Size: 0x9e0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "CUtlString m_sPickupName"
    // static metadata: MNetworkVarNames "int m_nNameOffset"
    #pragma pack(push, 1)
    class CCitadel_BreakablePropPickup : public server::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x9b0        
        // metadata: MNetworkEnable
        bool m_bActive; // 0x9c8        
        [[maybe_unused]] std::uint8_t pad_0x9c9[0x7]; // 0x9c9
        // metadata: MNetworkEnable
        CUtlString m_sPickupName; // 0x9d0        
        // metadata: MNetworkEnable
        int32_t m_nNameOffset; // 0x9d8        
        [[maybe_unused]] std::uint8_t pad_0x9dc[0x4];
        
        // Datamap fields:
        // Vector spawn_position; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_BreakablePropPickup because it is not a standard-layout class
    static_assert(sizeof(CCitadel_BreakablePropPickup) == 0x9e0);
};
