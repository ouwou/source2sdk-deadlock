#pragma once
#include "client/CCitadelBaseYamatoAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd18
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flExplodeEndTime"
	// MNetworkVarNames "GameTime_t m_flBuffEndTime"
	class CCitadel_Ability_InfinitySlash : public client::CCitadelBaseYamatoAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c68[0xa8]; // 0xc68
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flExplodeEndTime; // 0xd10		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flBuffEndTime; // 0xd14		
	};
};
