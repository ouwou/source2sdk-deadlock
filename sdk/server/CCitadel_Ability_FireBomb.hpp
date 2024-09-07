#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelAutoScaledTime.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc50
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAutoScaledTime m_flDetonateTime"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	class CCitadel_Ability_FireBomb : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x158]; // 0xad8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		server::CCitadelAutoScaledTime m_flDetonateTime; // 0xc30		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flStartTime; // 0xc48		
	};
};
