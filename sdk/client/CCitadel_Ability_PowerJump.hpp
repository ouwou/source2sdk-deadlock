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
	// Size: 0xd18
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAirRaiding"
	class CCitadel_Ability_PowerJump : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x4]; // 0xc60
	public:
		client::ParticleIndex_t m_nTargetingParticleIndex; // 0xc64		
		// MNetworkEnable
		bool m_bAirRaiding; // 0xc68		
	};
};
