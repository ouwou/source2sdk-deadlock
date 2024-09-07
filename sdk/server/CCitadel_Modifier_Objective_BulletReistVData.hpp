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
	class CCitadel_Modifier_Objective_BulletReistVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Objective Bullet Resist"
		// MPropertyDescription "Bullet Resist with no Enemy Heroes around"
		float m_BulletResist; // 0x5f8		
		// MPropertyDescription "Bullet Resist Reduced Per Enemy Hero (Max 0%)"
		float m_BulletResistReductionPerHero; // 0x5fc		
	};
};
