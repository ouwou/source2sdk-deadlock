#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x18
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CNmEvent
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		float m_flStartTimeSeconds; // 0x8		
		float m_flDurationSeconds; // 0xc		
		CGlobalSymbol m_syncID; // 0x10		
	};
};
