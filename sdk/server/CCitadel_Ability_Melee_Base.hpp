#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb60
	// Has VTable
	// Is Abstract
	// 
	// MNetworkVarNames "bool m_bUsingThisMelee"
	// MNetworkVarNames "bool m_bUsingMeleeTagActive"
	// MNetworkVarNames "bool m_bHitWithThisAttack"
	// MNetworkVarNames "GameTime_t m_flLastActivateTime"
	// MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
	// MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
	class CCitadel_Ability_Melee_Base : public server::CCitadelBaseAbility
	{
	public:
		int32_t m_nHitNumber; // 0xad8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bUsingThisMelee; // 0xadc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bUsingMeleeTagActive; // 0xadd		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bHitWithThisAttack; // 0xade		
	private:
		[[maybe_unused]] uint8_t __pad0adf[0x1]; // 0xadf
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flLastActivateTime; // 0xae0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flNextAttackAllowedTime; // 0xae4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flAttackTriggeredTime; // 0xae8		
	};
};
