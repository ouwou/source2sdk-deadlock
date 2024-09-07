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
	class CTriggerAddModifier : public server::CBaseTrigger
	{
	public:
		CUtlSymbolLarge m_strModifier; // 0x938		
		float m_flDuration; // 0x940		
		bool m_bMomentary; // 0x944		
	};
};
