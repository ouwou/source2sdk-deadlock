#pragma once
#include "pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	struct PulseNodeDynamicOutflows_t__DynamicOutflow_t
	{
	public:
		CGlobalSymbol m_OutflowID; // 0x0		
		// MFgdFromSchemaCompletelySkipField
		pulse_runtime_lib::CPulse_OutflowConnection m_Connection; // 0x8		
	};
};
