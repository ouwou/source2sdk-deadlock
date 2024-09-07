#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x610
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierItemPickupAuraTargetVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Timers"
		float m_PickupTimer; // 0x5f8		
	private:
		[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_PickupTimerModifier; // 0x600		
	};
};
