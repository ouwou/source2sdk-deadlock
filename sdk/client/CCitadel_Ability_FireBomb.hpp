#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xcf8
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAutoScaledTime m_flDetonateTime"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	class CCitadel_Ability_FireBomb : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x78]; // 0xc60
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		client::CCitadelAutoScaledTime m_flDetonateTime; // 0xcd8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flStartTime; // 0xcf0		
	};
};
