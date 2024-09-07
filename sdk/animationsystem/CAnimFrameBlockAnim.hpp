#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	class CAnimFrameBlockAnim
	{
	public:
		int32_t m_nStartFrame; // 0x0		
		int32_t m_nEndFrame; // 0x4		
		CUtlVector<int32_t> m_segmentIndexArray; // 0x8		
	};
};
