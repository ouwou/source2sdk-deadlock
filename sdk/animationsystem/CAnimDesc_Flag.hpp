#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 1
	// Size: 0x8
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CAnimDesc_Flag
	{
	public:
		bool m_bLooping; // 0x0		
		bool m_bAllZeros; // 0x1		
		bool m_bHidden; // 0x2		
		bool m_bDelta; // 0x3		
		bool m_bLegacyWorldspace; // 0x4		
		bool m_bModelDoc; // 0x5		
		bool m_bImplicitSeqIgnoreDelta; // 0x6		
		bool m_bAnimGraphAdditive; // 0x7		
	};
};
