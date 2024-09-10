#pragma once
#include "client/CCitadelAbilityComponent.hpp"
#include "client/C_CitadelItemPickup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd20
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	// MNetworkVarNames "bool m_bPickedUp"
	class CCitadelItemPickupRejuv : public client::C_CitadelItemPickup
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb78		
		// MNetworkEnable
		bool m_bPickedUp; // 0xd18		
	};
};
