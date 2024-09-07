#pragma once
#include "client/C_NPC_SimpleAnimatingAI.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xaa8
	// Has VTable
	// 
	// MNetworkIncludeByName "m_bTakesDamage"
	// MNetworkIncludeByName "m_nTakeDamageFlags"
	// MNetworkVarNames "Vector m_vecUnitStatusOffset"
	class C_NPC_BaseDefenseSentry : public client::C_NPC_SimpleAnimatingAI
	{
	public:
		// MNetworkEnable
		Vector m_vecUnitStatusOffset; // 0xa98		
	};
};
