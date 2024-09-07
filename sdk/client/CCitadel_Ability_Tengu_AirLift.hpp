#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe78
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bFlying"
	// MNetworkVarNames "bool m_bFlyingStarted"
	// MNetworkVarNames "bool m_bIsGrabbing"
	// MNetworkVarNames "bool m_bIsHoldingBomb"
	// MNetworkVarNames "float m_flCurrentSpeed"
	class CCitadel_Ability_Tengu_AirLift : public client::C_CitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_nHoldBombEffect; // 0xc60		
	private:
		[[maybe_unused]] uint8_t __pad0c64[0x1fc]; // 0xc64
	public:
		// MNetworkEnable
		bool m_bFlying; // 0xe60		
		// MNetworkEnable
		bool m_bFlyingStarted; // 0xe61		
		// MNetworkEnable
		bool m_bIsGrabbing; // 0xe62		
		// MNetworkEnable
		bool m_bIsHoldingBomb; // 0xe63		
		// MNetworkEnable
		float m_flCurrentSpeed; // 0xe64		
	};
};
