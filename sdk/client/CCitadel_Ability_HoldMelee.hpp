#pragma once
#include "client/CCitadel_Ability_Melee_Base.hpp"
#include "client/EMeleeHold_AttackState.hpp"
#include "client/EMeleeHold_AttackType.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd28
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flParryWindowEndTime"
	// MNetworkVarNames "GameTime_t m_flNextParryTime"
	// MNetworkVarNames "GameTime_t m_flStateStartTime"
	// MNetworkVarNames "GameTime_t m_flDashStartTime"
	// MNetworkVarNames "EMeleeHold_AttackState m_eCurrentAttackState"
	// MNetworkVarNames "EMeleeHold_AttackType m_eCurrentAttackType"
	// MNetworkVarNames "Vector m_vAirDashDir"
	class CCitadel_Ability_HoldMelee : public client::CCitadel_Ability_Melee_Base
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flParryWindowEndTime; // 0xce0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextParryTime; // 0xce4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flStateStartTime; // 0xce8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashStartTime; // 0xcec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::EMeleeHold_AttackState m_eCurrentAttackState; // 0xcf0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::EMeleeHold_AttackType m_eCurrentAttackType; // 0xcf4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vAirDashDir; // 0xcf8		
		bool m_bCreatedChargeEffects; // 0xd04		
	private:
		[[maybe_unused]] uint8_t __pad0d05[0x3]; // 0xd05
	public:
		QAngle m_angForced; // 0xd08		
	};
};
