#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CTriggerTrooperDetector;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	class CCitadel_Modifier_Objective_Bullet_Resist : public server::CCitadelModifier
	{
	public:
		CHandle<server::CTriggerTrooperDetector> m_hTrigger; // 0xc8		
		int32_t m_iEnemyHeroCount; // 0xcc		
	};
};
