#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseShivAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xbe0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flTotalPendingDamage"
	class CCitadel_Ability_Shiv_Defer_Damage : public server::CCitadelBaseShivAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0xe0]; // 0xad8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		float m_flTotalPendingDamage; // 0xbb8		
	private:
		[[maybe_unused]] uint8_t __pad0bbc[0x1c]; // 0xbbc
	public:
		entity2::GameTime_t m_flLastDeferredDamageApplicationTime; // 0xbd8		
	};
};
