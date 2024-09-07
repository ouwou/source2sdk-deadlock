#pragma once
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_BreakablePropSpeedPickupVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Powerup Values"
		float m_flSpeedBoost; // 0x5f8		
		float m_flSprintBoost; // 0x5fc		
	};
};
