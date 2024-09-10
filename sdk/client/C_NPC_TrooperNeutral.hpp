#pragma once
#include "client/C_AI_CitadelNPC.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x14c0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bPlayingIdle"
	// MNetworkVarNames "bool m_bShieldActive"
	class C_NPC_TrooperNeutral : public client::C_AI_CitadelNPC
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnPlayingIdleChanged"
		bool m_bPlayingIdle; // 0x1490		
		// MNetworkEnable
		// MNetworkChangeCallback "OnShieldActiveChanged"
		bool m_bShieldActive; // 0x1491		
	};
};
