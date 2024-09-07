#pragma once
#include "pulse_runtime_lib/IGapHost_YieldingCursor.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MPulseInternal_IsCursor
	class CPulseExecCursor : public pulse_runtime_lib::IGapHost_YieldingCursor
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0x98]; // 0x8
	public:
	};
};
