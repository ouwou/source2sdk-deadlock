#pragma once
#include "server/CCitadelAbilityComponent.hpp"
#include "server/CNPC_SimpleAnimatingAI.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd58
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	class CNPC_TeslaCoil : public server::CNPC_SimpleAnimatingAI
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb38		
	private:
		[[maybe_unused]] uint8_t __pad0d40[0x4]; // 0xd40
	public:
		float m_flDeployTime; // 0xd44		
		
		// Datamap fields:
		// float m_flLifeTime; // 0xd4c
		// void m_flSpawnTime; // 0xd48
	};
};
