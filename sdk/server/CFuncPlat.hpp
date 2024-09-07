#pragma once
#include "server/CBasePlatTrain.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x818
	// Has VTable
	class CFuncPlat : public server::CBasePlatTrain
	{
	public:
		CUtlSymbolLarge m_sNoise; // 0x810		
		
		// Datamap fields:
		// void CFuncPlatPlatUse; // 0x0
		// void CFuncPlatCallGoDown; // 0x0
		// void CFuncPlatCallHitTop; // 0x0
		// void CFuncPlatCallHitBottom; // 0x0
		// void InputToggle; // 0x0
		// void InputGoUp; // 0x0
		// void InputGoDown; // 0x0
	};
};
