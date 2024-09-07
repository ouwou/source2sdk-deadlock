#pragma once
#include "server/CCitadelBaseTriggerAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelBaseAbility;
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
	class CCitadel_Ability_TangoTether_Trigger : public server::CCitadelBaseTriggerAbility
	{
	public:
		CHandle<server::CCitadelBaseAbility> m_hBaseAbility; // 0xae8		
	};
};
