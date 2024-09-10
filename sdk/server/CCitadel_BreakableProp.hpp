#pragma once
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
	// MNetworkIncludeByName "m_lifeState"
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkIncludeByName "m_iHealth"
	// MNetworkVarNames "int m_nHitIndex"
	class CCitadel_BreakableProp : public server::CBaseAnimGraph
	{
	public:
		// MNetworkEnable
		int32_t m_nHitIndex; // 0x9a0		
	};
};
