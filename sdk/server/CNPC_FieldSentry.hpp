#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CNPC_SimpleAnimatingAI.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb80
	// Has VTable
	// 
	// MNetworkVarNames "float m_flAimPitch"
	// MNetworkVarNames "float m_flAttackRange"
	class CNPC_FieldSentry : public server::CNPC_SimpleAnimatingAI
	{
	private:
		[[maybe_unused]] uint8_t __pad0b38[0xc]; // 0xb38
	public:
		// MNetworkEnable
		float m_flAimPitch; // 0xb44		
		entity2::GameTime_t m_flNextAttackTime; // 0xb48		
		float m_flAttackCone; // 0xb4c		
		float m_flAttackDelay; // 0xb50		
		entity2::GameTime_t m_flLastAlertSound; // 0xb54		
		float m_flTrackingSpeed; // 0xb58		
		float m_flDeployTime; // 0xb5c		
	private:
		[[maybe_unused]] uint8_t __pad0b60[0xa]; // 0xb60
	public:
		bool m_bHadEnemy; // 0xb6a		
		bool m_bLockedOn; // 0xb6b		
	private:
		[[maybe_unused]] uint8_t __pad0b6c[0x10]; // 0xb6c
	public:
		// MNetworkEnable
		float m_flAttackRange; // 0xb7c		
		
		// Datamap fields:
		// float m_flLifeTime; // 0xb64
		// void m_flSpawnTime; // 0xb60
	};
};
