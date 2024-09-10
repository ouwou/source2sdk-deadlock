#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CBaseAnimGraph.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9a8
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flTurnSolidTime"
	class CCitadel_Ice_Dome_Blocker : public server::CBaseAnimGraph
	{
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flTurnSolidTime; // 0x9a0		
	};
};
