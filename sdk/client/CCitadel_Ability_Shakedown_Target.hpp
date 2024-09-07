#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CCitadel_Ability_Yakuza_Shakedown;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd18
	// Has VTable
	class CCitadel_Ability_Shakedown_Target : public client::C_CitadelBaseAbility
	{
	public:
		CHandle<client::CCitadel_Ability_Yakuza_Shakedown> m_hShadowdownAbility; // 0xc60		
		Vector m_AimPos; // 0xc64		
	};
};
