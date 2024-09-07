#pragma once
#include "entity2/GameTick_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x20
	// Has Trivial Destructor
	struct thinkfunc_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		HSCRIPT m_hFn; // 0x8		
		CUtlStringToken m_nContext; // 0x10		
		entity2::GameTick_t m_nNextThinkTick; // 0x14		
		entity2::GameTick_t m_nLastThinkTick; // 0x18		
		
		// Datamap fields:
		// void m_think; // 0x0
	};
};
