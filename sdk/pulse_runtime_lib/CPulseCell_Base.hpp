#pragma once
#include "pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CPulseCell_Base
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MFgdFromSchemaCompletelySkipField
		pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x8		
	};
};
