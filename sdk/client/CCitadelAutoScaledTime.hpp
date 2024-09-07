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
	// Size: 0x18
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flTime"
	class CCitadelAutoScaledTime
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flTime; // 0x8		
	};
};
