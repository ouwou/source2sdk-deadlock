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
	class CTriggerTeleport : public server::CBaseTrigger
	{
	public:
		CUtlSymbolLarge m_iLandmark; // 0x938		
		bool m_bUseLandmarkAngles; // 0x940		
		bool m_bMirrorPlayer; // 0x941		
	};
};
