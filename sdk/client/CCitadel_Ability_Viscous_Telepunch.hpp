#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ETelepunchState_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe88
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vecTeleportPosition"
	// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
	// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
	// MNetworkVarNames "GameTime_t m_flNextStateTime"
	class CCitadel_Ability_Viscous_Telepunch : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x1f8]; // 0xc60
	public:
		// MNetworkEnable
		Vector m_vecTeleportPosition; // 0xe58		
		// MNetworkEnable
		Vector m_vecTeleportPositionNormal; // 0xe64		
		// MNetworkEnable
		client::ETelepunchState_t m_eTelepunchState; // 0xe70		
	private:
		[[maybe_unused]] uint8_t __pad0e71[0x3]; // 0xe71
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flNextStateTime; // 0xe74		
	};
};
