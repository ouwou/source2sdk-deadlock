#pragma once
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x950
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vLaunchTarget"
	// MNetworkVarNames "float m_flLaunchSpeed"
	class CCitadelCatapultTrigger : public server::CBaseTrigger
	{
	public:
		// MNetworkEnable
		Vector m_vLaunchTarget; // 0x938		
		// MNetworkEnable
		float m_flLaunchSpeed; // 0x944		
		CUtlSymbolLarge m_nameTarget; // 0x948		
	};
};
