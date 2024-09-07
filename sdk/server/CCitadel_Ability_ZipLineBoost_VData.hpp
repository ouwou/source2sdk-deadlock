#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1508
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ZipLineBoost_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ZipboostModifier; // 0x14f0		
		// MPropertyGroupName "Gameplay"
		float m_flTimeToActivate; // 0x1500		
		float m_flTimeForHint; // 0x1504		
	};
};
