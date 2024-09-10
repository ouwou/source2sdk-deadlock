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
	// Size: 0xb98
	// Has VTable
	// 
	// MNetworkIncludeByName "m_bTakesDamage"
	// MNetworkIncludeByName "m_nTakeDamageFlags"
	// MNetworkVarNames "Vector m_vecUnitStatusOffset"
	class CNPC_BaseDefenseSentry : public server::CNPC_SimpleAnimatingAI
	{
	private:
		[[maybe_unused]] uint8_t __pad0b38[0x8]; // 0xb38
	public:
		// MNetworkEnable
		Vector m_vecUnitStatusOffset; // 0xb40		
	private:
		[[maybe_unused]] uint8_t __pad0b4c[0x28]; // 0xb4c
	public:
		float m_flAttackCone; // 0xb74		
		float m_flAttackDelay; // 0xb78		
		entity2::GameTime_t m_flLastAlertSound; // 0xb7c		
	private:
		[[maybe_unused]] uint8_t __pad0b80[0x4]; // 0xb80
	public:
		int16_t m_nSentryLevel; // 0xb84		
	private:
		[[maybe_unused]] uint8_t __pad0b86[0x2]; // 0xb86
	public:
		Vector m_vecForward; // 0xb88		
		
		// Datamap fields:
		// void EnableAttacking; // 0x0
		// void DisableAttacking; // 0x0
	};
};
