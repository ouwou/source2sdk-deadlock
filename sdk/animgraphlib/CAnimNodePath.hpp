#pragma once
#include "modellib/AnimNodeID.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 4
	// Size: 0x30
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CAnimNodePath
	{
	public:
		modellib::AnimNodeID m_path[11]; // 0x0		
		int32_t m_nCount; // 0x2c		
	};
};
