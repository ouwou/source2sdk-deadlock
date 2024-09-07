#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CTier3BossAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xaf0
	// Has VTable
	class CCitadel_Ability_Tier3Boss_LaserBeam : public server::CTier3BossAbility
	{
	public:
		CModifierHandleTyped<server::CCitadelModifier> m_pBeamModifier[1]; // 0xad8		
	};
};
