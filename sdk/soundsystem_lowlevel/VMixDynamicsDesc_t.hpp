#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0x30
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixDynamicsDesc_t
	{
	public:
		float m_fldbGain; // 0x0		
		float m_fldbNoiseGateThreshold; // 0x4		
		float m_fldbCompressionThreshold; // 0x8		
		float m_fldbLimiterThreshold; // 0xc		
		float m_fldbKneeWidth; // 0x10		
		float m_flRatio; // 0x14		
		float m_flLimiterRatio; // 0x18		
		float m_flAttackTimeMS; // 0x1c		
		float m_flReleaseTimeMS; // 0x20		
		float m_flRMSTimeMS; // 0x24		
		float m_flWetMix; // 0x28		
		bool m_bPeakMode; // 0x2c		
	};
};
