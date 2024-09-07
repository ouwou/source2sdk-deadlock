#pragma once
#include "client/CCitadel_Item.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd30
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bFlying"
	// MNetworkVarNames "bool m_bSummoning"
	class CCitadel_Upgrade_MagicCarpet : public client::CCitadel_Item
	{
	public:
		entity2::GameTime_t m_flFlyingStartTime; // 0xc78		
	private:
		[[maybe_unused]] uint8_t __pad0c7c[0xac]; // 0xc7c
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bFlying; // 0xd28		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bSummoning; // 0xd29		
	};
};
