#pragma once
#include "animationsystem/AnimParamType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 1
	// Size: 0x2
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CAnimParamHandle
	{
	public:
		animationsystem::AnimParamType_t m_type; // 0x0		
		uint8_t m_index; // 0x1		
	};
};
