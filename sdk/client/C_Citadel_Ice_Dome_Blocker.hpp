#pragma once
#include "client/CBaseAnimGraph.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb48
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flTurnSolidTime"
	class C_Citadel_Ice_Dome_Blocker : public client::CBaseAnimGraph
	{
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flTurnSolidTime; // 0xb40		
	};
};
