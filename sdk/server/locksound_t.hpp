#pragma once
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// Has Trivial Destructor
	struct locksound_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlSymbolLarge sLockedSound; // 0x8		
		CUtlSymbolLarge sUnlockedSound; // 0x10		
		entity2::GameTime_t flwaitSound; // 0x18		
	};
};
