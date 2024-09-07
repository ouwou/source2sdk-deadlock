#pragma once
#include "client/C_BaseToggle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x838
	// Has VTable
	// 
	// MNetworkIncludeByName "m_spawnflags"
	// MNetworkVarNames "bool m_bDisabled"
	// MNetworkVarNames "bool m_bClientSidePredicted"
	class C_BaseTrigger : public client::C_BaseToggle
	{
	public:
		// MNetworkEnable
		bool m_bDisabled; // 0x830		
		// MNetworkEnable
		bool m_bClientSidePredicted; // 0x831		
	};
};
