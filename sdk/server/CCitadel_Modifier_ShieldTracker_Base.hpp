#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x110
	// Has VTable
	class CCitadel_Modifier_ShieldTracker_Base : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x28]; // 0xc8
	public:
		Vector m_vecShield; // 0xf0		
		float m_flShieldDamageTime; // 0xfc		
		float m_flShieldBreakTime; // 0x100		
		float m_flShieldBreakHealAmount; // 0x104		
		float m_flShieldBreakHealDone; // 0x108		
		bool m_bShieldHealingAfterBreak; // 0x10c		
		bool m_bForceRegen; // 0x10d		
	};
};
