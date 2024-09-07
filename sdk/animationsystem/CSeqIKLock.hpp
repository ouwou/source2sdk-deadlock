#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 4
	// Size: 0xc
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CSeqIKLock
	{
	public:
		float m_flPosWeight; // 0x0		
		float m_flAngleWeight; // 0x4		
		int16_t m_nLocalBone; // 0x8		
		bool m_bBonesOrientedAlongPositiveX; // 0xa		
	};
};
