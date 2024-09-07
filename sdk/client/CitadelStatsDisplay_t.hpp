#pragma once
#include "client/CitadelStatsSpiritDisplay_t.hpp"
#include "client/CitadelStatsVitalityDisplay_t.hpp"
#include "client/CitadelStatsWeaponDisplay_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xa8
	// 
	// MGetKV3ClassDefaults
	struct CitadelStatsDisplay_t
	{
	public:
		// MPropertyDescription "What information do we want to display for Weapon?"
		client::CitadelStatsWeaponDisplay_t m_eWeaponStatsDisplay; // 0x0		
		// MPropertyDescription "What information do we want to display for Vitality?"
		client::CitadelStatsVitalityDisplay_t m_eVitalityStatsDisplay; // 0x60		
		// MPropertyDescription "What information do we want to display for Spirit?"
		client::CitadelStatsSpiritDisplay_t m_eSpiritStatsDisplay; // 0x90		
	};
};
