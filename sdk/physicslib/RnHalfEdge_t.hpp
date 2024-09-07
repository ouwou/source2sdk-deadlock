#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 1
	// Size: 0x4
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct RnHalfEdge_t
	{
	public:
		uint8_t m_nNext; // 0x0		
		uint8_t m_nTwin; // 0x1		
		uint8_t m_nOrigin; // 0x2		
		uint8_t m_nFace; // 0x3		
	};
};
