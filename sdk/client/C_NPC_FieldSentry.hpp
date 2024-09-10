#pragma once
#include "client/C_NPC_SimpleAnimatingAI.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb58
	// Has VTable
	// 
	// MNetworkVarNames "float m_flAttackRange"
	// MNetworkVarNames "float m_flAimPitch"
	class C_NPC_FieldSentry : public client::C_NPC_SimpleAnimatingAI
	{
	private:
		[[maybe_unused]] uint8_t __pad0b48[0x4]; // 0xb48
	public:
		// MNetworkEnable
		float m_flAttackRange; // 0xb4c		
		// MNetworkEnable
		float m_flAimPitch; // 0xb50		
	};
};
