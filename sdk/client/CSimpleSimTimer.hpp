#pragma once
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x8
	// Has Trivial Destructor
	class CSimpleSimTimer
	{
	public:
		entity2::GameTime_t m_next; // 0x0		
		WorldGroupId_t m_nWorldGroupId; // 0x4		
	};
};
