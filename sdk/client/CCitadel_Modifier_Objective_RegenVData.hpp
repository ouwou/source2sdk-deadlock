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
	class CCitadel_Modifier_Objective_RegenVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Objective Health Regen"
		// MPropertyDescription "How health per second when out of combat?"
		float m_flOutOfCombatHealthRegen; // 0x5f8		
		// MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
		float m_flOutOfCombatRegenDelay; // 0x5fc		
	};
};
