#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: host
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::host
{
	// Alignment: 8
	// Size: 0x10
	// Has VTable
	// Is Abstract
	class CAnimScriptBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		bool m_bIsValid; // 0x8		
	};
};
