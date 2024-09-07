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
	// 
	// MNetworkVarNames "GameTime_t m_flParryStartTime"
	// MNetworkVarNames "bool m_bAttackParried"
	// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
	class CCitadel_Ability_MeleeParry : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flParryStartTime; // 0xc60		
		// MNetworkEnable
		bool m_bAttackParried; // 0xc64		
	private:
		[[maybe_unused]] uint8_t __pad0c65[0x3]; // 0xc65
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flParrySuccessTime; // 0xc68		
	};
};
