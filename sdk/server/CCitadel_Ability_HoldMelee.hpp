#pragma once
#include "client/EMeleeHold_AttackState.hpp"
#include "client/EMeleeHold_AttackType.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_Ability_Melee_Base.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xba0
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flParryWindowEndTime"
	// MNetworkVarNames "GameTime_t m_flNextParryTime"
	// MNetworkVarNames "GameTime_t m_flStateStartTime"
	// MNetworkVarNames "GameTime_t m_flDashStartTime"
	// MNetworkVarNames "EMeleeHold_AttackState m_eCurrentAttackState"
	// MNetworkVarNames "EMeleeHold_AttackType m_eCurrentAttackType"
	// MNetworkVarNames "Vector m_vAirDashDir"
	class CCitadel_Ability_HoldMelee : public server::CCitadel_Ability_Melee_Base
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flParryWindowEndTime; // 0xb60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextParryTime; // 0xb64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flStateStartTime; // 0xb68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashStartTime; // 0xb6c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::EMeleeHold_AttackState m_eCurrentAttackState; // 0xb70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::EMeleeHold_AttackType m_eCurrentAttackType; // 0xb74		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vAirDashDir; // 0xb78		
		bool m_bCreatedChargeEffects; // 0xb84		
	private:
		[[maybe_unused]] uint8_t __pad0b85[0x3]; // 0xb85
	public:
		QAngle m_angForced; // 0xb88		
	};
};
