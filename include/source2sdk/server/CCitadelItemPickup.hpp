#pragma once
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "int32 m_eLootType"
    // static metadata: MNetworkVarNames "int32 m_nCurrencyValue"
    // static metadata: MNetworkVarNames "string_t m_iszModelName"
    // static metadata: MNetworkVarNames "float m_flModelScale"
    // static metadata: MNetworkVarNames "EHANDLE m_hTargetPlayer"
    // static metadata: MNetworkVarNames "float m_flFallRate"
    #pragma pack(push, 1)
    class CCitadelItemPickup : public server::CCitadelAnimatingModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb30[0x8]; // 0xb30
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xb38        
        // metadata: MNetworkEnable
        int32_t m_eLootType; // 0xb50        
        // metadata: MNetworkEnable
        int32_t m_nCurrencyValue; // 0xb54        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszModelName; // 0xb58        
        // metadata: MNetworkEnable
        float m_flModelScale; // 0xb60        
        // metadata: MNetworkEnable
        // m_hTargetPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetPlayer;
        char m_hTargetPlayer[0x4]; // 0xb64        
        // metadata: MNetworkEnable
        float m_flFallRate; // 0xb68        
        [[maybe_unused]] std::uint8_t pad_0xb6c[0xc]; // 0xb6c
        Vector m_vHomePosition; // 0xb78        
        Vector m_vDropPosition; // 0xb84        
        [[maybe_unused]] std::uint8_t pad_0xb90[0x5098];
        
        // Datamap fields:
        // bool m_bRequireGroundForPickup; // 0xb70
        // bool from_crate; // 0x7fffffff
        // int32_t m_eObjectivePosition; // 0xb6c
        // int32_t m_nKillingTeamNumber; // 0xb74
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelItemPickup because it is not a standard-layout class
    static_assert(sizeof(CCitadelItemPickup) == 0x5c28);
};
