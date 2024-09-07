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
	// Size: 0x18
	// Has Trivial Destructor
	struct ResponseContext_t
	{
	public:
		CUtlSymbolLarge m_iszName; // 0x0		
		CUtlSymbolLarge m_iszValue; // 0x8		
		entity2::GameTime_t m_fExpirationTime; // 0x10		
	};
};
