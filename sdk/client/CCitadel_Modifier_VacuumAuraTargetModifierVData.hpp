#pragma once
#include "client/CCitadel_Modifier_StunnedVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x6f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_VacuumAuraTargetModifierVData : public client::CCitadel_Modifier_StunnedVData
	{
	public:
		float m_flOuterSpeedScale; // 0x6d8		
		float m_flSpeedScaleBias; // 0x6dc		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_TargetLoopingSound; // 0x6e0		
	};
};
