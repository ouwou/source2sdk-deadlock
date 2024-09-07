#pragma once
#include "server/CCitadel_Modifier_StunnedVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x6f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_VacuumAuraTargetModifierVData : public server::CCitadel_Modifier_StunnedVData
	{
	public:
		float m_flOuterSpeedScale; // 0x6d8		
		float m_flSpeedScaleBias; // 0x6dc		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_TargetLoopingSound; // 0x6e0		
	};
};
