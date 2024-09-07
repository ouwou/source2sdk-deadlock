#pragma once
#include "animgraphlib/PoseType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 2
	// Size: 0x4
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CPoseHandle
	{
	public:
		uint16_t m_nIndex; // 0x0		
		animgraphlib::PoseType_t m_eType; // 0x2		
	};
};
