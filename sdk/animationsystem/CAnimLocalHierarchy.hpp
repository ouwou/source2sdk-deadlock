#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	class CAnimLocalHierarchy
	{
	public:
		CBufferString m_sBone; // 0x0		
		CBufferString m_sNewParent; // 0x10		
		int32_t m_nStartFrame; // 0x20		
		int32_t m_nPeakFrame; // 0x24		
		int32_t m_nTailFrame; // 0x28		
		int32_t m_nEndFrame; // 0x2c		
	};
};
