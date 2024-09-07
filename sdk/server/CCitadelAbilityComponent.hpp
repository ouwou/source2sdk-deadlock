#pragma once
#include "entity2/CEntityComponent.hpp"
#include "entity2/EntComponentInfo_t.hpp"
#include "server/AbilityResource_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x208
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
		[[maybe_unused]] uint8_t __pad0008[0x80]; // 0x8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "Abilities"
		// MNetworkChangeCallback "abilitiesChanged"
		// MNetworkPriority "32"
		CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_vecAbilities; // 0x88		
		// MNetworkEnable
		// MNetworkUserGroup "Abilities"
		// MNetworkPriority "32"
		CNetworkUtlVectorBase<CUtlStringToken> m_vecUniversalItems; // 0xa0		
		// MNetworkEnable
		// MNetworkUserGroup "Abilities"
		// MNetworkPriority "32"
		CNetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationSlots; // 0xb8		
		// MNetworkEnable
		// MNetworkUserGroup "Abilities"
		// MNetworkPriority "32"
		CNetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationAbilityIDs; // 0xd0		
		// MNetworkEnable
		// MNetworkChangeCallback "AbiCompSelectedAbilityChanged"
		CHandle<server::CBaseEntity> m_hSelectedAbility; // 0xe8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		CHandle<server::CBaseEntity> m_hPreviouslySelectedAbility; // 0xec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bPreviousAbilityQueued; // 0xf0		
	private:
		[[maybe_unused]] uint8_t __pad00f1[0x3]; // 0xf1
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "AbiCompTimeScaleChanged"
		float m_flTimeScale; // 0xf4		
		// MNetworkEnable
		// MNetworkChangeCallback "AbiCompParticleTimeScaleChanged"
		float m_flParticleTimeScale; // 0xf8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bInInterruptState; // 0xfc		
	private:
		[[maybe_unused]] uint8_t __pad00fd[0x3]; // 0xfd
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		server::AbilityResource_t m_ResourceStamina; // 0x100		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		server::AbilityResource_t m_ResourceAbility; // 0x120		
	private:
		[[maybe_unused]] uint8_t __pad0140[0x48]; // 0x140
	public:
		uint32_t m_nExecuteAbilityMask; // 0x188		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelAbilityComponent")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelAbilityComponent")->GetStaticFields()[1]->m_pInstance);};
	};
};
