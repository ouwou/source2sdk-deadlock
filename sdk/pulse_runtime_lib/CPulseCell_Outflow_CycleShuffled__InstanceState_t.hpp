#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	struct CPulseCell_Outflow_CycleShuffled__InstanceState_t
	{
	public:
		CUtlVectorFixedGrowable<uint8_t,8> m_Shuffle; // 0x0		
		int32_t m_nNextShuffle; // 0x20		
	};
};
