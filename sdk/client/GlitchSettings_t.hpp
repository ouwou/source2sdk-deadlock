#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 4
	// Size: 0x2c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct GlitchSettings_t
	{
	public:
		float m_flStrength; // 0x0		
		int32_t m_nQuantizeType; // 0x4		
		float m_flQuantizeScale; // 0x8		
		float m_flQuantizeStrength; // 0xc		
		float m_flFrameRate; // 0x10		
		float m_flSpeed; // 0x14		
		float m_flJumpStrength; // 0x18		
		float m_flDistortStrength; // 0x1c		
		float m_flWhiteNoiseStrength; // 0x20		
		float m_flScanlineStrength; // 0x24		
		float m_flBreakupStrength; // 0x28		
	};
};
