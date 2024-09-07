#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xcf8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bFlying"
	// MNetworkVarNames "bool m_bFlyingStarted"
	// MNetworkVarNames "bool m_bIsGrabbing"
	// MNetworkVarNames "bool m_bIsHoldingBomb"
	// MNetworkVarNames "float m_flCurrentSpeed"
	class CCitadel_Ability_Tengu_AirLift : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x1c]; // 0xad8
	public:
		client::ParticleIndex_t m_nHoldBombEffect; // 0xaf4		
	private:
		[[maybe_unused]] uint8_t __pad0af8[0x1f8]; // 0xaf8
	public:
		// MNetworkEnable
		bool m_bFlying; // 0xcf0		
		// MNetworkEnable
		bool m_bFlyingStarted; // 0xcf1		
		// MNetworkEnable
		bool m_bIsGrabbing; // 0xcf2		
		// MNetworkEnable
		bool m_bIsHoldingBomb; // 0xcf3		
		// MNetworkEnable
		float m_flCurrentSpeed; // 0xcf4		
	};
};
