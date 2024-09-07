#pragma once
#include "server/CCitadelBaseTriggerAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadel_Ability_WreckingBall;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xaf0
	// Has VTable
	class CCitadel_Ability_WreckingBallThrow : public server::CCitadelBaseTriggerAbility
	{
	public:
		CHandle<server::CCitadel_Ability_WreckingBall> m_hWreckingBallAbility; // 0xae8		
	};
};
