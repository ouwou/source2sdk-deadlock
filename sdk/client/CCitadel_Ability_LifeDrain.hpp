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
	// Size: 0xc68
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
	class CCitadel_Ability_LifeDrain : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		entity2::GameTime_t m_tDrainLifeStopTime; // 0xc60		
	};
};
