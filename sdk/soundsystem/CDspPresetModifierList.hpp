#pragma once
#include "soundsystem/CDSPMixgroupModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	class CDspPresetModifierList
	{
	public:
		// MPropertyDescription "Name of the DSP effect / subgraph used."
		// MPropertyFriendlyName "DSP Effect Name"
		CUtlString m_dspName; // 0x0		
		// MPropertyDescription "Set of modifiers for individual mix groups"
		// MPropertyFriendlyName "Mixgroup Modifiers"
		CUtlVector<soundsystem::CDSPMixgroupModifier> m_modifiers; // 0x8		
	};
};
