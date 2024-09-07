#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x10
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct RnBlendVertex_t
	{
	public:
		uint16_t m_nWeight0; // 0x0		
		uint16_t m_nIndex0; // 0x2		
		uint16_t m_nWeight1; // 0x4		
		uint16_t m_nIndex1; // 0x6		
		uint16_t m_nWeight2; // 0x8		
		uint16_t m_nIndex2; // 0xa		
		uint16_t m_nFlags; // 0xc		
		uint16_t m_nTargetIndex; // 0xe		
	};
};
