#pragma once
#include "server/CBaseModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1510
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Gravity_Lasso_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_GravityLassoSelf; // 0x14f0		
		CEmbeddedSubclass<server::CBaseModifier> m_GravityLassoTarget; // 0x1500		
	};
};
