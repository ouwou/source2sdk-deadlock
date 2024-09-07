#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1550
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityCadencePrimaryWeaponVData : public server::CCitadel_Ability_PrimaryWeaponVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x1540		
	};
};
