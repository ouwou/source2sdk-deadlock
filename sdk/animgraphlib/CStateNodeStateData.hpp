#pragma once
#include "animgraphlib/CAnimUpdateNodeRef.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CStateNodeStateData
	{
	public:
		animgraphlib::CAnimUpdateNodeRef m_pChild; // 0x0		
		struct 
		{
			uint8_t m_bExclusiveRootMotion: 1; 			
			uint8_t m_bExclusiveRootMotionFirstFrame: 1; 			
			uint8_t __pad0: 2;
		}; // 4 bits
	};
};
