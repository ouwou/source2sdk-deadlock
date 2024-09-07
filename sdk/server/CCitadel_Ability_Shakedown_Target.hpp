#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadel_Ability_Yakuza_Shakedown;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb90
	// Has VTable
	class CCitadel_Ability_Shakedown_Target : public server::CCitadelBaseAbility
	{
	public:
		CHandle<server::CCitadel_Ability_Yakuza_Shakedown> m_hShadowdownAbility; // 0xad8		
		Vector m_AimPos; // 0xadc		
	};
};
