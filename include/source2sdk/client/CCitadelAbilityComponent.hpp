#pragma once
#include "source2sdk/client/AbilityResource_t.hpp"
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/EntComponentInfo_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_vecAbilities"
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
        [[maybe_unused]] std::uint8_t pad_0x08[0x68]; // 0x8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkChangeCallback "abilitiesChanged"
        // metadata: MNetworkPriority "32"
        // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecAbilities;
        char m_vecAbilities[0x18]; // 0x70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_vecUniversalItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlStringToken> m_vecUniversalItems;
        char m_vecUniversalItems[0x18]; // 0x88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_arPendingAsyncAbilityReservationSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationSlots;
        char m_arPendingAsyncAbilityReservationSlots[0x18]; // 0xa0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_arPendingAsyncAbilityReservationAbilityIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationAbilityIDs;
        char m_arPendingAsyncAbilityReservationAbilityIDs[0x18]; // 0xb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompSelectedAbilityChanged"
        // m_hSelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSelectedAbility;
        char m_hSelectedAbility[0x4]; // 0xd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_hPreviouslySelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPreviouslySelectedAbility;
        char m_hPreviouslySelectedAbility[0x4]; // 0xd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bPreviousAbilityQueued; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xd9[0x3]; // 0xd9
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompTimeScaleChanged"
        float m_flTimeScale; // 0xdc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompParticleTimeScaleChanged"
        float m_flParticleTimeScale; // 0xe0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInInterruptState; // 0xe4        
        [[maybe_unused]] std::uint8_t pad_0xe5[0x3]; // 0xe5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::AbilityResource_t m_ResourceStamina; // 0xe8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::AbilityResource_t m_ResourceAbility; // 0x108        
        [[maybe_unused]] std::uint8_t pad_0x128[0x48]; // 0x128
        uint32_t m_nExecuteAbilityMask; // 0x170        
        [[maybe_unused]] std::uint8_t pad_0x174[0x2c];
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelAbilityComponent")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelAbilityComponent")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelAbilityComponent because it is not a standard-layout class
    static_assert(sizeof(CCitadelAbilityComponent) == 0x1a0);
};
