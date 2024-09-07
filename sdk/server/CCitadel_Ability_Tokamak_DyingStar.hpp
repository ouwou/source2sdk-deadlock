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
	// Size: 0xbc0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bInFlight"
	class CCitadel_Ability_Tokamak_DyingStar : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_nRollFXIndex; // 0xad8		
		// MNetworkEnable
		bool m_bInFlight; // 0xadc		
	};
};
