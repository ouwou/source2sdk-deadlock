#pragma once
#include "server/CCitadelAbilityComponent.hpp"
#include "server/CCitadelItemPickup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5e28
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	// MNetworkVarNames "bool m_bPickedUp"
	class CCitadelItemPickupRejuv : public server::CCitadelItemPickup
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x5c18		
	private:
		[[maybe_unused]] uint8_t __pad5e20[0x4]; // 0x5e20
	public:
		// MNetworkEnable
		bool m_bPickedUp; // 0x5e24		
	};
};
