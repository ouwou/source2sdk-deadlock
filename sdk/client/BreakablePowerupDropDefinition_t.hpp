#pragma once
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
	// 
	// MGetKV3ClassDefaults
	struct BreakablePowerupDropDefinition_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MPropertyDescription "What does this drop?"
		CSubclassName<0> m_sPickup; // 0x8		
		// MPropertyDescription "What's the weight of this drop?"
		float m_flPickupWeight; // 0x18		
	};
};
