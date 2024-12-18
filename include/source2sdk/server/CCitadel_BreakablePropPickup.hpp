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
    // Size: 0xa78
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "CUtlString m_sPickupName"
    // static metadata: MNetworkVarNames "int m_nNameOffset"
    // static metadata: MNetworkVarNames "CUtlString m_sAmbientNoise"
    #pragma pack(push, 1)
    class CCitadel_BreakablePropPickup : public server::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xa38        
        // metadata: MNetworkEnable
        bool m_bActive; // 0xa50        
        [[maybe_unused]] std::uint8_t pad_0xa51[0x7]; // 0xa51
        // metadata: MNetworkEnable
        CUtlString m_sPickupName; // 0xa58        
        // metadata: MNetworkEnable
        int32_t m_nNameOffset; // 0xa60        
        [[maybe_unused]] std::uint8_t pad_0xa64[0x4]; // 0xa64
        // metadata: MNetworkEnable
        CUtlString m_sAmbientNoise; // 0xa68        
        [[maybe_unused]] std::uint8_t pad_0xa70[0x8];
        
        // Datamap fields:
        // Vector spawn_position; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_BreakablePropPickup because it is not a standard-layout class
    static_assert(sizeof(CCitadel_BreakablePropPickup) == 0xa78);
};
