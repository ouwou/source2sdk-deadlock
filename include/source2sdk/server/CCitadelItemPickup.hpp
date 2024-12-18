#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x64c0
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
        [[maybe_unused]] std::uint8_t pad_0xbb8[0x8]; // 0xbb8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbc0        
        // metadata: MNetworkEnable
        int32_t m_eLootType; // 0xbd8        
        // metadata: MNetworkEnable
        int32_t m_nCurrencyValue; // 0xbdc        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszModelName; // 0xbe0        
        // metadata: MNetworkEnable
        float m_flModelScale; // 0xbe8        
        // metadata: MNetworkEnable
        // m_hTargetPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetPlayer;
        char m_hTargetPlayer[0x4]; // 0xbec        
        // metadata: MNetworkEnable
        float m_flFallRate; // 0xbf0        
        [[maybe_unused]] std::uint8_t pad_0xbf4[0xc]; // 0xbf4
        Vector m_vHomePosition; // 0xc00        
        Vector m_vDropPosition; // 0xc0c        
        entity2::GameTime_t m_tFirstPickupTime; // 0xc18        
        [[maybe_unused]] std::uint8_t pad_0xc1c[0x58a4];
        
        // Datamap fields:
        // bool m_bRequireGroundForPickup; // 0xbf8
        // bool from_crate; // 0x7fffffff
        // int32_t m_eObjectivePosition; // 0xbf4
        // int32_t m_nKillingTeamNumber; // 0xbfc
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelItemPickup because it is not a standard-layout class
    static_assert(sizeof(CCitadelItemPickup) == 0x64c0);
};
