#pragma once
#include "client/CCitadelAbilityComponent.hpp"
#include "client/C_NPC_SimpleAnimatingAI.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xce8
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	class C_NPC_TeslaCoil : public client::C_NPC_SimpleAnimatingAI
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb48		
	};
};
