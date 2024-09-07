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
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "float32 m_duration"
	// MNetworkVarNames "GameTime_t m_timestamp"
	// MNetworkVarNames "float32 m_timescale"
	// MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
	class CountdownTimer
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		float m_duration; // 0x8		
		// MNetworkEnable
		entity2::GameTime_t m_timestamp; // 0xc		
		// MNetworkEnable
		float m_timescale; // 0x10		
		// MNetworkEnable
		WorldGroupId_t m_nWorldGroupId; // 0x14		
	};
};
