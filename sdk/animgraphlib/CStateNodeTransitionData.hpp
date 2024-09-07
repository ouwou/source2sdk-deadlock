#pragma once
#include "animgraphlib/CBlendCurve.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 4
	// Size: 0x1c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CStateNodeTransitionData
	{
	public:
		animgraphlib::CBlendCurve m_curve; // 0x0		
		CAnimValue<float> m_blendDuration; // 0x8		
		CAnimValue<float> m_resetCycleValue; // 0x10		
		struct 
		{
			uint8_t m_bReset: 1; 			
			uint8_t m_resetCycleOption: 3; 			
			uint8_t __pad0: 4;
		}; // 8 bits
	};
};
