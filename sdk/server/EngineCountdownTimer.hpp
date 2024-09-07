#pragma once
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
	// MNetworkVarNames "float32 m_timestamp"
	// MNetworkVarNames "float32 m_timescale"
	class EngineCountdownTimer
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		float m_duration; // 0x8		
		// MNetworkEnable
		float m_timestamp; // 0xc		
		// MNetworkEnable
		float m_timescale; // 0x10		
	};
};
