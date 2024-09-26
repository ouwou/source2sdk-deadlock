#pragma once
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/C_CitadelItemPickup.hpp"
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
    // Size: 0xd30
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    // static metadata: MNetworkVarNames "bool m_bPickedUp"
    #pragma pack(push, 1)
    class CCitadelItemPickupRejuv : public client::C_CitadelItemPickup
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb88        
        // metadata: MNetworkEnable
        bool m_bPickedUp; // 0xd28        
        [[maybe_unused]] std::uint8_t pad_0xd29[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelItemPickupRejuv because it is not a standard-layout class
    static_assert(sizeof(CCitadelItemPickupRejuv) == 0xd30);
};
