#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0x20
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixConvolutionDesc_t
	{
	public:
		// MPropertyFriendlyName "gain of wet signal (dB)"
		// MPropertyAttributeRange "-36 3"
		float m_fldbGain; // 0x0		
		// MPropertyFriendlyName "Pre-delay (ms)"
		float m_flPreDelayMS; // 0x4		
		// MPropertyFriendlyName "Dry/Wet"
		float m_flWetMix; // 0x8		
		// MPropertyFriendlyName "Low EQ gain (dB)"
		// MPropertyAttributeRange "-24 24"
		float m_fldbLow; // 0xc		
		// MPropertyFriendlyName "Mid EQ gain (dB)"
		// MPropertyAttributeRange "-24 24"
		float m_fldbMid; // 0x10		
		// MPropertyFriendlyName "High EQ gain (dB)"
		// MPropertyAttributeRange "-24 24"
		float m_fldbHigh; // 0x14		
		// MPropertyFriendlyName "Low Cutoff Freq (Hz)"
		float m_flLowCutoffFreq; // 0x18		
		// MPropertyFriendlyName "High Cutoff Freq (Hz)"
		float m_flHighCutoffFreq; // 0x1c		
	};
};
