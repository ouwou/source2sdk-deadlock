#pragma once
#include "client/ELashGrappleState.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseLockonAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd90
	// Has VTable
	// 
	// MNetworkVarNames "ELashGrappleState m_EGrappleState"
	// MNetworkVarNames "GameTime_t m_flStateEnterTime"
	// MNetworkVarNames "GameTime_t m_flNextStateTime"
	// MNetworkVarNames "GameTime_t m_flBoostEndTime"
	class CCitadel_Ability_Lash_Ultimate : public server::CCitadelBaseLockonAbility
	{
	public:
		// MNetworkEnable
		client::ELashGrappleState m_EGrappleState; // 0xc48		
	private:
		[[maybe_unused]] uint8_t __pad0c49[0x3]; // 0xc49
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStateEnterTime; // 0xc4c		
		// MNetworkEnable
		entity2::GameTime_t m_flNextStateTime; // 0xc50		
		// MNetworkEnable
		entity2::GameTime_t m_flBoostEndTime; // 0xc54		
	};
};
