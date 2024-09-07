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
	// Size: 0xb70
	// Has VTable
	// 
	// MNetworkIncludeByName "m_bTakesDamage"
	// MNetworkIncludeByName "m_nTakeDamageFlags"
	// MNetworkVarNames "Vector m_vecUnitStatusOffset"
	class CNPC_BaseDefenseSentry : public server::CNPC_SimpleAnimatingAI
	{
	private:
		[[maybe_unused]] uint8_t __pad0b10[0x8]; // 0xb10
	public:
		// MNetworkEnable
		Vector m_vecUnitStatusOffset; // 0xb18		
	private:
		[[maybe_unused]] uint8_t __pad0b24[0x28]; // 0xb24
	public:
		float m_flAttackCone; // 0xb4c		
		float m_flAttackDelay; // 0xb50		
		entity2::GameTime_t m_flLastAlertSound; // 0xb54		
	private:
		[[maybe_unused]] uint8_t __pad0b58[0x4]; // 0xb58
	public:
		int16_t m_nSentryLevel; // 0xb5c		
	private:
		[[maybe_unused]] uint8_t __pad0b5e[0x2]; // 0xb5e
	public:
		Vector m_vecForward; // 0xb60		
		
		// Datamap fields:
		// void EnableAttacking; // 0x0
		// void DisableAttacking; // 0x0
	};
};
