#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// Has Trivial Destructor
	struct AI_FreePassParams_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		float timeToTrigger; // 0x8		
		float duration; // 0xc		
		float moveTolerance; // 0x10		
		float refillRate; // 0x14		
		float coverDist; // 0x18		
		float peekTime; // 0x1c		
		float peekTimeAfterDamage; // 0x20		
		float peekEyeDist; // 0x24		
		float peekEyeDistZ; // 0x28		
	};
};
