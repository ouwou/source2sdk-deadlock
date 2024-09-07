#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x20
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct RnNode_t
	{
	public:
		Vector m_vMin; // 0x0		
		uint32_t m_nChildren; // 0xc		
		Vector m_vMax; // 0x10		
		uint32_t m_nTriangleOffset; // 0x1c		
	};
};
