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
	// Size: 0x10
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "GameTime_t m_timestamp"
	// MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
	class IntervalTimer
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		entity2::GameTime_t m_timestamp; // 0x8		
		// MNetworkEnable
		WorldGroupId_t m_nWorldGroupId; // 0xc		
	};
};
