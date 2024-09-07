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
	struct VMixDynamicsCompressorDesc_t
	{
	public:
		// MPropertyFriendlyName "Output Gain (dB)"
		float m_fldbOutputGain; // 0x0		
		// MPropertyFriendlyName "Threshold (dB)"
		float m_fldbCompressionThreshold; // 0x4		
		// MPropertyFriendlyName "Knee Width (dB)"
		float m_fldbKneeWidth; // 0x8		
		// MPropertyFriendlyName "Compression Ratio"
		float m_flCompressionRatio; // 0xc		
		// MPropertyFriendlyName "Attack time (ms)"
		float m_flAttackTimeMS; // 0x10		
		// MPropertyFriendlyName "Release time (ms)"
		float m_flReleaseTimeMS; // 0x14		
		// MPropertyFriendlyName "Threshold detection time (ms)"
		float m_flRMSTimeMS; // 0x18		
		// MPropertyFriendlyName "Dry/Wet"
		float m_flWetMix; // 0x1c		
		// MPropertyFriendlyName "Peak mode"
		bool m_bPeakMode; // 0x20		
	};
};
