#pragma once
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CPhysicsProp.hpp"
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
    // Size: 0xd30
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "int m_eLootType"
    #pragma pack(push, 1)
    class CItemCrate : public server::CPhysicsProp
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xd00        
        [[maybe_unused]] std::uint8_t pad_0xd18[0x14]; // 0xd18
        // metadata: MNetworkEnable
        int32_t m_eLootType; // 0xd2c        
        
        // Datamap fields:
        // CHandle< CBaseEntity > m_hSpawner; // 0xd18
        // int32_t m_eObjectivePosition; // 0xd24
        // void InputAttachedToParachute; // 0x0
        // void InputDetachedFromParachute; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemCrate because it is not a standard-layout class
    static_assert(sizeof(CItemCrate) == 0xd30);
};
