#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0x14
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixShaperDesc_t
	{
	public:
		// MPropertyFriendlyName "Shape"
		// MPropertyAttributeRange "0 14"
		int32_t m_nShape; // 0x0		
		// MPropertyFriendlyName "Drive (dB)"
		// MPropertyAttributeRange "0 36"
		float m_fldbDrive; // 0x4		
		// MPropertyFriendlyName "Output Gain (dB)"
		// MPropertyAttributeRange "-36 0"
		float m_fldbOutputGain; // 0x8		
		// MPropertyFriendlyName "Dry/Wet"
		float m_flWetMix; // 0xc		
		// MPropertyFriendlyName "Oversampling"
		int32_t m_nOversampleFactor; // 0x10		
	};
};
