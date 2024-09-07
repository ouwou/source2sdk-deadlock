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
	class CTriggerModifier : public server::CBaseTrigger
	{
	public:
		CUtlSymbolLarge m_iszModifierName; // 0x938		
		CUtlStringToken m_tModifier; // 0x940		
	};
};
