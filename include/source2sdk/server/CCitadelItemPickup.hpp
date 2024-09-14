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
    // Size: 0x5c18
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
        [[maybe_unused]] std::uint8_t pad_0xb20[0x8]; // 0xb20
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xb28        
        // metadata: MNetworkEnable
        int32_t m_eLootType; // 0xb40        
        // metadata: MNetworkEnable
        int32_t m_nCurrencyValue; // 0xb44        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszModelName; // 0xb48        
        // metadata: MNetworkEnable
        float m_flModelScale; // 0xb50        
        // metadata: MNetworkEnable
        // m_hTargetPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetPlayer;
        char m_hTargetPlayer[0x4]; // 0xb54        
        // metadata: MNetworkEnable
        float m_flFallRate; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb5c[0xc]; // 0xb5c
        Vector m_vHomePosition; // 0xb68        
        Vector m_vDropPosition; // 0xb74        
        [[maybe_unused]] std::uint8_t pad_0xb80[0x5098];
        
        // Datamap fields:
        // bool m_bRequireGroundForPickup; // 0xb60
        // bool from_crate; // 0x7fffffff
        // int32_t m_eObjectivePosition; // 0xb5c
        // int32_t m_nKillingTeamNumber; // 0xb64
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelItemPickup because it is not a standard-layout class
    static_assert(sizeof(CCitadelItemPickup) == 0x5c18);
};
