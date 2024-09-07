#pragma once
#include "soundsystem_lowlevel/VMixLFOShape_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0xc
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixOscDesc_t
	{
	public:
		// MPropertyFriendlyName "Type"
		soundsystem_lowlevel::VMixLFOShape_t oscType; // 0x0		
		// MPropertyFriendlyName "Frequency (Hz)"
		// MPropertyAttributeRange "0.1 16000"
		float m_freq; // 0x4		
		// MPropertyFriendlyName "Phase (degrees)"
		// MPropertyAttributeRange "0 360"
		float m_flPhase; // 0x8		
	};
};
