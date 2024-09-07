#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	class CAnimFrameSegment
	{
	public:
		int32_t m_nUniqueFrameIndex; // 0x0		
		uint32_t m_nLocalElementMasks; // 0x4		
		int32_t m_nLocalChannel; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		CUtlBinaryBlock m_container; // 0x10		
	};
};
