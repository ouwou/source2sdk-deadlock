#pragma once
#include "client/CCitadelBaseLockonAbility.hpp"
#include "client/ELashGrappleState.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf08
	// Has VTable
	// 
	// MNetworkVarNames "ELashGrappleState m_EGrappleState"
	// MNetworkVarNames "GameTime_t m_flStateEnterTime"
	// MNetworkVarNames "GameTime_t m_flNextStateTime"
	// MNetworkVarNames "GameTime_t m_flBoostEndTime"
	class CCitadel_Ability_Lash_Ultimate : public client::CCitadelBaseLockonAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0dd8[0x2]; // 0xdd8
	public:
		// MNetworkEnable
		client::ELashGrappleState m_EGrappleState; // 0xdda		
	private:
		[[maybe_unused]] uint8_t __pad0ddb[0x1]; // 0xddb
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStateEnterTime; // 0xddc		
		// MNetworkEnable
		entity2::GameTime_t m_flNextStateTime; // 0xde0		
		// MNetworkEnable
		entity2::GameTime_t m_flBoostEndTime; // 0xde4		
	};
};
