#pragma once
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_BreakablePropSpeedPickupVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Powerup Values"
		float m_flSpeedBoost; // 0x5f8		
		float m_flSprintBoost; // 0x5fc		
	};
};
