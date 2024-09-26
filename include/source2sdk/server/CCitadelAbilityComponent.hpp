#pragma once
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/EntComponentInfo_t.hpp"
#include "source2sdk/server/AbilityResource_t.hpp"
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
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x208
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle<CCitadelBaseAbility> m_vecAbilities"
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecUniversalItems"
    // static metadata: MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationSlots"
    // static metadata: MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationAbilityIDs"
    // static metadata: MNetworkVarNames "EHANDLE m_hSelectedAbility"
    // static metadata: MNetworkVarNames "EHANDLE m_hPreviouslySelectedAbility"
    // static metadata: MNetworkVarNames "bool m_bPreviousAbilityQueued"
    // static metadata: MNetworkVarNames "float m_flTimeScale"
    // static metadata: MNetworkVarNames "float m_flParticleTimeScale"
    // static metadata: MNetworkVarNames "bool m_bInInterruptState"
    // static metadata: MNetworkVarNames "AbilityResource_t m_ResourceStamina"
    // static metadata: MNetworkVarNames "AbilityResource_t m_ResourceAbility"
    #pragma pack(push, 1)
    class CCitadelAbilityComponent : public entity2::CEntityComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x80]; // 0x8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkChangeCallback "abilitiesChanged"
        // metadata: MNetworkPriority "32"
        // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CCitadelBaseAbility>> m_vecAbilities;
        char m_vecAbilities[0x18]; // 0x88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_vecUniversalItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecUniversalItems;
        char m_vecUniversalItems[0x18]; // 0xa0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_arPendingAsyncAbilityReservationSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationSlots;
        char m_arPendingAsyncAbilityReservationSlots[0x18]; // 0xb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_arPendingAsyncAbilityReservationAbilityIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationAbilityIDs;
        char m_arPendingAsyncAbilityReservationAbilityIDs[0x18]; // 0xd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompSelectedAbilityChanged"
        // m_hSelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSelectedAbility;
        char m_hSelectedAbility[0x4]; // 0xe8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_hPreviouslySelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPreviouslySelectedAbility;
        char m_hPreviouslySelectedAbility[0x4]; // 0xec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bPreviousAbilityQueued; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0xf1[0x3]; // 0xf1
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompTimeScaleChanged"
        float m_flTimeScale; // 0xf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompParticleTimeScaleChanged"
        float m_flParticleTimeScale; // 0xf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInInterruptState; // 0xfc        
        [[maybe_unused]] std::uint8_t pad_0xfd[0x3]; // 0xfd
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        server::AbilityResource_t m_ResourceStamina; // 0x100        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        server::AbilityResource_t m_ResourceAbility; // 0x120        
        [[maybe_unused]] std::uint8_t pad_0x140[0x48]; // 0x140
        uint32_t m_nExecuteAbilityMask; // 0x188        
        [[maybe_unused]] std::uint8_t pad_0x18c[0x7c];
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelAbilityComponent")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelAbilityComponent")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelAbilityComponent because it is not a standard-layout class
    static_assert(sizeof(CCitadelAbilityComponent) == 0x208);
};
