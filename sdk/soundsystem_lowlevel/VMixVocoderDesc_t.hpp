#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0x28
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixVocoderDesc_t
	{
	public:
		int32_t m_nBandCount; // 0x0		
		float m_flBandwidth; // 0x4		
		float m_fldBModGain; // 0x8		
		float m_flFreqRangeStart; // 0xc		
		float m_flFreqRangeEnd; // 0x10		
		float m_fldBUnvoicedGain; // 0x14		
		float m_flAttackTimeMS; // 0x18		
		float m_flReleaseTimeMS; // 0x1c		
		int32_t m_nDebugBand; // 0x20		
		bool m_bPeakMode; // 0x24		
	};
};
