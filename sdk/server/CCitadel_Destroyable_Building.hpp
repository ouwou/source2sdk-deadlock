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
	// Size: 0xf48
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
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xb20		
		entity2::CEntityIOOutput m_OnDestroyed; // 0xb38		
		entity2::CEntityIOOutput m_OnRevitilized; // 0xb60		
		entity2::CEntityIOOutput m_OnDamageTaken; // 0xb88		
		entity2::CEntityIOOutput m_OnLifeChanged; // 0xbb0		
		entity2::CEntityIOOutput m_OnBecomeActive; // 0xbd8		
		entity2::CEntityIOOutput m_OnBecomeInvulnerable; // 0xc00		
		entity2::CEntityIOOutput m_OnBecomeVulnerable; // 0xc28		
		entity2::CEntityIOOutput m_OnUnderAttack; // 0xc50		
		entity2::CEntityIOOutput m_OnAttackSubsided; // 0xc78		
		int32_t m_nBuildingHealth; // 0xca0		
	private:
		[[maybe_unused]] uint8_t __pad0ca4[0x4]; // 0xca4
	public:
		int32_t m_iLane; // 0xca8		
		entity2::GameTime_t m_flDestroyedTime; // 0xcac		
		entity2::GameTime_t m_flLastDamagedTime; // 0xcb0		
		QAngle m_angOriginal; // 0xcb4		
	private:
		[[maybe_unused]] uint8_t __pad0cc0[0x18]; // 0xcc0
	public:
		CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xcd8		
	private:
		[[maybe_unused]] uint8_t __pad0ce0[0x8]; // 0xce0
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xce8		
		// MNetworkEnable
		CUtlVectorEmbeddedNetworkVar<server::WeakPoint_t> m_vecWeakPoints; // 0xef0		
		// MNetworkEnable
		// MNetworkChangeCallback "DestroyedChanged"
		bool m_bDestroyed; // 0xf40		
		// MNetworkEnable
		bool m_bActive; // 0xf41		
		// MNetworkEnable
		bool m_bFinal; // 0xf42		
	};
};
