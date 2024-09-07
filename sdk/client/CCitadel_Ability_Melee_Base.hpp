#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xce0
	// Has VTable
	// Is Abstract
	// 
	// MNetworkVarNames "bool m_bUsingThisMelee"
	// MNetworkVarNames "bool m_bUsingMeleeTagActive"
	// MNetworkVarNames "bool m_bHitWithThisAttack"
	// MNetworkVarNames "GameTime_t m_flLastActivateTime"
	// MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
	// MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
	class CCitadel_Ability_Melee_Base : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bUsingThisMelee; // 0xc60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bUsingMeleeTagActive; // 0xc61		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bHitWithThisAttack; // 0xc62		
	private:
		[[maybe_unused]] uint8_t __pad0c63[0x1]; // 0xc63
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLastActivateTime; // 0xc64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextAttackAllowedTime; // 0xc68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flAttackTriggeredTime; // 0xc6c		
	};
};
