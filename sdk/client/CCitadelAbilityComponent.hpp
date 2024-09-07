#pragma once
#include "client/AbilityResource_t.hpp"
#include "entity2/CEntityComponent.hpp"
#include "entity2/EntComponentInfo_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1a0
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_vecAbilities"
	// MNetworkVarNames "EntitySubclassID_t m_vecUniversalItems"
	// MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationSlots"
	// MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationAbilityIDs"
	// MNetworkVarNames "EHANDLE m_hSelectedAbility"
	// MNetworkVarNames "EHANDLE m_hPreviouslySelectedAbility"
	// MNetworkVarNames "bool m_bPreviousAbilityQueued"
	// MNetworkVarNames "float m_flTimeScale"
	// MNetworkVarNames "float m_flParticleTimeScale"
	// MNetworkVarNames "bool m_bInInterruptState"
	// MNetworkVarNames "AbilityResource_t m_ResourceStamina"
	// MNetworkVarNames "AbilityResource_t m_ResourceAbility"
	class CCitadelAbilityComponent : public entity2::CEntityComponent
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0x68]; // 0x8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "Abilities"
		// MNetworkChangeCallback "abilitiesChanged"
		// MNetworkPriority "32"
		C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecAbilities; // 0x70		
		// MNetworkEnable
		// MNetworkUserGroup "Abilities"
		// MNetworkPriority "32"
		C_NetworkUtlVectorBase<CUtlStringToken> m_vecUniversalItems; // 0x88		
		// MNetworkEnable
		// MNetworkUserGroup "Abilities"
		// MNetworkPriority "32"
		C_NetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationSlots; // 0xa0		
		// MNetworkEnable
		// MNetworkUserGroup "Abilities"
		// MNetworkPriority "32"
		C_NetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationAbilityIDs; // 0xb8		
		// MNetworkEnable
		// MNetworkChangeCallback "AbiCompSelectedAbilityChanged"
		CHandle<client::C_BaseEntity> m_hSelectedAbility; // 0xd0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		CHandle<client::C_BaseEntity> m_hPreviouslySelectedAbility; // 0xd4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bPreviousAbilityQueued; // 0xd8		
	private:
		[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "AbiCompTimeScaleChanged"
		float m_flTimeScale; // 0xdc		
		// MNetworkEnable
		// MNetworkChangeCallback "AbiCompParticleTimeScaleChanged"
		float m_flParticleTimeScale; // 0xe0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bInInterruptState; // 0xe4		
	private:
		[[maybe_unused]] uint8_t __pad00e5[0x3]; // 0xe5
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		client::AbilityResource_t m_ResourceStamina; // 0xe8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		client::AbilityResource_t m_ResourceAbility; // 0x108		
	private:
		[[maybe_unused]] uint8_t __pad0128[0x48]; // 0x128
	public:
		uint32_t m_nExecuteAbilityMask; // 0x170		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelAbilityComponent")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelAbilityComponent")->GetStaticFields()[1]->m_pInstance);};
	};
};
