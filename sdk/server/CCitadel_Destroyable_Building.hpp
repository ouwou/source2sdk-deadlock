#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelAbilityComponent.hpp"
#include "server/CCitadelAnimatingModelEntity.hpp"
#include "server/CCitadelMinimapComponent.hpp"
#include "server/WeakPoint_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xf20
	// Has VTable
	// 
	// MNetworkIncludeByName "m_bTakesDamage"
	// MNetworkIncludeByName "m_nTakeDamageFlags"
	// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
	// MNetworkVarNames "bool m_bDestroyed"
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "bool m_bFinal"
	class CCitadel_Destroyable_Building : public server::CCitadelAnimatingModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xaf8		
		entity2::CEntityIOOutput m_OnDestroyed; // 0xb10		
		entity2::CEntityIOOutput m_OnRevitilized; // 0xb38		
		entity2::CEntityIOOutput m_OnDamageTaken; // 0xb60		
		entity2::CEntityIOOutput m_OnLifeChanged; // 0xb88		
		entity2::CEntityIOOutput m_OnBecomeActive; // 0xbb0		
		entity2::CEntityIOOutput m_OnBecomeInvulnerable; // 0xbd8		
		entity2::CEntityIOOutput m_OnBecomeVulnerable; // 0xc00		
		entity2::CEntityIOOutput m_OnUnderAttack; // 0xc28		
		entity2::CEntityIOOutput m_OnAttackSubsided; // 0xc50		
		int32_t m_nBuildingHealth; // 0xc78		
	private:
		[[maybe_unused]] uint8_t __pad0c7c[0x4]; // 0xc7c
	public:
		int32_t m_iLane; // 0xc80		
		entity2::GameTime_t m_flDestroyedTime; // 0xc84		
		entity2::GameTime_t m_flLastDamagedTime; // 0xc88		
		QAngle m_angOriginal; // 0xc8c		
	private:
		[[maybe_unused]] uint8_t __pad0c98[0x18]; // 0xc98
	public:
		CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xcb0		
	private:
		[[maybe_unused]] uint8_t __pad0cb8[0x8]; // 0xcb8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xcc0		
		// MNetworkEnable
		CUtlVectorEmbeddedNetworkVar<server::WeakPoint_t> m_vecWeakPoints; // 0xec8		
		// MNetworkEnable
		// MNetworkChangeCallback "DestroyedChanged"
		bool m_bDestroyed; // 0xf18		
		// MNetworkEnable
		bool m_bActive; // 0xf19		
		// MNetworkEnable
		bool m_bFinal; // 0xf1a		
	};
};
