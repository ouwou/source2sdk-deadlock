#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1548
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityCadencePrimaryWeaponVData : public client::CCitadel_Ability_PrimaryWeaponVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1538		
	};
};
