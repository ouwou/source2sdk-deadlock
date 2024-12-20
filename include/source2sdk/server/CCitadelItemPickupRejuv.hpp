#pragma once
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelItemPickup.hpp"
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
    // Size: 0x66d0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    // static metadata: MNetworkVarNames "bool m_bPickedUp"
    #pragma pack(push, 1)
    class CCitadelItemPickupRejuv : public server::CCitadelItemPickup
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x64c0        
        [[maybe_unused]] std::uint8_t pad_0x66c8[0x4]; // 0x66c8
        // metadata: MNetworkEnable
        bool m_bPickedUp; // 0x66cc        
        [[maybe_unused]] std::uint8_t pad_0x66cd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelItemPickupRejuv because it is not a standard-layout class
    static_assert(sizeof(CCitadelItemPickupRejuv) == 0x66d0);
};
