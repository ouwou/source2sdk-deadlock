#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0xb28
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flDashCastStartTime"
	// MNetworkVarNames "Vector m_vDashCastDir"
	class CCitadelBaseDashCastAbility : public server::CCitadelBaseAbility
	{
	public:
		CHandle<server::CCitadelBaseAbility> m_hAbilityToTrigger; // 0xad8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashCastStartTime; // 0xadc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vDashCastDir; // 0xae0		
	};
};
