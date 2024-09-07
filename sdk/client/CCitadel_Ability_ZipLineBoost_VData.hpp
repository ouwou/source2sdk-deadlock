#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1508
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ZipLineBoost_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ZipboostModifier; // 0x14f0		
		// MPropertyGroupName "Gameplay"
		float m_flTimeToActivate; // 0x1500		
		float m_flTimeForHint; // 0x1504		
	};
};
