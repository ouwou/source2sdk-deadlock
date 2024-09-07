#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_Ability_PrimaryWeapon_BeamWeapon.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xfb0
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flStartWindUpTime"
	// MNetworkVarNames "GameTime_t m_flStartFiringTime"
	// MNetworkVarNames "bool m_bFiring"
	class CCitadel_Ability_PrimaryWeapon_Bebop : public server::CCitadel_Ability_PrimaryWeapon_BeamWeapon
	{
	private:
		[[maybe_unused]] uint8_t __pad0b88[0x2a8]; // 0xb88
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStartWindUpTime; // 0xe30		
		// MNetworkEnable
		entity2::GameTime_t m_flStartFiringTime; // 0xe34		
		// MNetworkEnable
		bool m_bFiring; // 0xe38		
	};
};
