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
	// Size: 0xb58
	// Has VTable
	// 
	// MNetworkVarNames "float m_flAimPitch"
	// MNetworkVarNames "float m_flAttackRange"
	class CNPC_FieldSentry : public server::CNPC_SimpleAnimatingAI
	{
	private:
		[[maybe_unused]] uint8_t __pad0b10[0xc]; // 0xb10
	public:
		// MNetworkEnable
		float m_flAimPitch; // 0xb1c		
		entity2::GameTime_t m_flNextAttackTime; // 0xb20		
		float m_flAttackCone; // 0xb24		
		float m_flAttackDelay; // 0xb28		
		entity2::GameTime_t m_flLastAlertSound; // 0xb2c		
		float m_flTrackingSpeed; // 0xb30		
		float m_flDeployTime; // 0xb34		
	private:
		[[maybe_unused]] uint8_t __pad0b38[0xa]; // 0xb38
	public:
		bool m_bHadEnemy; // 0xb42		
		bool m_bLockedOn; // 0xb43		
	private:
		[[maybe_unused]] uint8_t __pad0b44[0x10]; // 0xb44
	public:
		// MNetworkEnable
		float m_flAttackRange; // 0xb54		
		
		// Datamap fields:
		// float m_flLifeTime; // 0xb3c
		// void m_flSpawnTime; // 0xb38
	};
};
