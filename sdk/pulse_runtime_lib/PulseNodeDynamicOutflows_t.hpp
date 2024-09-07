#pragma once
#include "pulse_runtime_lib/PulseNodeDynamicOutflows_t__DynamicOutflow_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	struct PulseNodeDynamicOutflows_t
	{
	public:
		CUtlVector<pulse_runtime_lib::PulseNodeDynamicOutflows_t__DynamicOutflow_t> m_Outflows; // 0x0		
	};
};
