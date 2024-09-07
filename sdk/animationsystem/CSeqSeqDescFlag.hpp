#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 1
	// Size: 0xb
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CSeqSeqDescFlag
	{
	public:
		bool m_bLooping; // 0x0		
		bool m_bSnap; // 0x1		
		bool m_bAutoplay; // 0x2		
		bool m_bPost; // 0x3		
		bool m_bHidden; // 0x4		
		bool m_bMulti; // 0x5		
		bool m_bLegacyDelta; // 0x6		
		bool m_bLegacyWorldspace; // 0x7		
		bool m_bLegacyCyclepose; // 0x8		
		bool m_bLegacyRealtime; // 0x9		
		bool m_bModelDoc; // 0xa		
	};
};
