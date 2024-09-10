#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelMinimapComponent.hpp"
#include "server/CNPC_SimpleAnimatingAI.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xbb0
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
	// MNetworkVarNames "float m_flAimPitch"
	// MNetworkVarNames "float m_flAttackRange"
	class CNPC_ShieldedSentry : public server::CNPC_SimpleAnimatingAI
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xb38		
	private:
		[[maybe_unused]] uint8_t __pad0b50[0xc]; // 0xb50
	public:
		// MNetworkEnable
		float m_flAimPitch; // 0xb5c		
		entity2::GameTime_t m_flNextAttackTime; // 0xb60		
		float m_flAttackCone; // 0xb64		
		float m_flAttackDelay; // 0xb68		
		entity2::GameTime_t m_flLastAlertSound; // 0xb6c		
		float m_flTrackingSpeed; // 0xb70		
		float m_flDeployTime; // 0xb74		
	private:
		[[maybe_unused]] uint8_t __pad0b78[0xa]; // 0xb78
	public:
		bool m_bHadEnemy; // 0xb82		
		bool m_bLockedOn; // 0xb83		
	private:
		[[maybe_unused]] uint8_t __pad0b84[0x8]; // 0xb84
	public:
		// MNetworkEnable
		float m_flAttackRange; // 0xb8c		
		
		// Datamap fields:
		// float m_flLifeTime; // 0xb7c
		// void m_flSpawnTime; // 0xb78
	};
};
