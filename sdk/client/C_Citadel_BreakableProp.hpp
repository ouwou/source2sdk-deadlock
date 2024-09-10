#pragma once
#include "client/CBaseAnimGraph.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb78
	// Has VTable
	// 
	// MNetworkIncludeByName "m_lifeState"
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkIncludeByName "m_iHealth"
	// MNetworkVarNames "int m_nHitIndex"
	class C_Citadel_BreakableProp : public client::CBaseAnimGraph
	{
	public:
		// MNetworkEnable
		int32_t m_nHitIndex; // 0xb40		
	};
};
