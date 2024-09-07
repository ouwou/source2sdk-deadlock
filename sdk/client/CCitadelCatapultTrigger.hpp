#pragma once
#include "client/C_BaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x850
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vLaunchTarget"
	// MNetworkVarNames "float m_flLaunchSpeed"
	class CCitadelCatapultTrigger : public client::C_BaseTrigger
	{
	public:
		// MNetworkEnable
		Vector m_vLaunchTarget; // 0x838		
		// MNetworkEnable
		float m_flLaunchSpeed; // 0x844		
		CUtlSymbolLarge m_nameTarget; // 0x848		
	};
};
