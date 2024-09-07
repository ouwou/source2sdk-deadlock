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
	// Size: 0x948
	// Has VTable
	class CTonemapTrigger : public server::CBaseTrigger
	{
	public:
		CUtlSymbolLarge m_tonemapControllerName; // 0x938		
		CEntityHandle m_hTonemapController; // 0x940		
	};
};
