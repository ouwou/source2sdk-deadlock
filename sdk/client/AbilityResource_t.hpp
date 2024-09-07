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
	// Size: 0x20
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "GameTime_t m_flLatchTime"
	// MNetworkVarNames "float m_flLatchValue"
	struct AbilityResource_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		float m_flCurrentValue; // 0x8		
		float m_flPrevRegenRate; // 0xc		
		float m_flMaxValue; // 0x10		
		// MNetworkEnable
		entity2::GameTime_t m_flLatchTime; // 0x14		
		// MNetworkEnable
		float m_flLatchValue; // 0x18		
	};
};
