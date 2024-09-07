#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0x24
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixDynamicsBand_t
	{
	public:
		// MPropertyFriendlyName "Input Gain (dB)"
		float m_fldbGainInput; // 0x0		
		// MPropertyFriendlyName "Output Gain (dB)"
		float m_fldbGainOutput; // 0x4		
		// MPropertyFriendlyName "Below Threshold(dB)"
		float m_fldbThresholdBelow; // 0x8		
		// MPropertyFriendlyName "Above Threshold(dB)"
		float m_fldbThresholdAbove; // 0xc		
		// MPropertyFriendlyName "Upward Ratio"
		float m_flRatioBelow; // 0x10		
		// MPropertyFriendlyName "Downward Ratio"
		float m_flRatioAbove; // 0x14		
		// MPropertyFriendlyName "Attack time (ms)"
		float m_flAttackTimeMS; // 0x18		
		// MPropertyFriendlyName "Release time (ms)"
		float m_flReleaseTimeMS; // 0x1c		
		// MPropertyFriendlyName "Enabled"
		bool m_bEnable; // 0x20		
		// MPropertyFriendlyName "Solo"
		bool m_bSolo; // 0x21		
	};
};
