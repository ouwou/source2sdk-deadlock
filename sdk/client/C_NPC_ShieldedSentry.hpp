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
	// Size: 0xc48
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	// MNetworkVarNames "float m_flAttackRange"
	// MNetworkVarNames "float m_flAimPitch"
	class C_NPC_ShieldedSentry : public client::C_NPC_SimpleAnimatingAI
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xa98		
	private:
		[[maybe_unused]] uint8_t __pad0c38[0x4]; // 0xc38
	public:
		// MNetworkEnable
		float m_flAttackRange; // 0xc3c		
		// MNetworkEnable
		float m_flAimPitch; // 0xc40		
	};
};
