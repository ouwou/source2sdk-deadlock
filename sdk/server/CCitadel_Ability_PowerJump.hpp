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
	// Size: 0xb88
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAirRaiding"
	class CCitadel_Ability_PowerJump : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_nTargetingParticleIndex; // 0xad8		
		// MNetworkEnable
		bool m_bAirRaiding; // 0xadc		
	};
};
