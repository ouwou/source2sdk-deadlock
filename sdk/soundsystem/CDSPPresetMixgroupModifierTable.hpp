#pragma once
#include "soundsystem/CDspPresetModifierList.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	// MVDataRoot
	// MVDataNodeType "1"
	class CDSPPresetMixgroupModifierTable
	{
	public:
		// MPropertyDescription "Table of mixgroup modifiers for effect names."
		// MPropertyFriendlyName "Modifier Table"
		CUtlVector<soundsystem::CDspPresetModifierList> m_table; // 0x0		
	};
};
