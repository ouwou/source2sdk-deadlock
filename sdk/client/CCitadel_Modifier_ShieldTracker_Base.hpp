#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe0
	// Has VTable
	class CCitadel_Modifier_ShieldTracker_Base : public client::CCitadelModifier
	{
	public:
		Vector m_vecShield; // 0xc0		
		float m_flShieldDamageTime; // 0xcc		
		float m_flShieldBreakTime; // 0xd0		
		float m_flShieldBreakHealAmount; // 0xd4		
		float m_flShieldBreakHealDone; // 0xd8		
		bool m_bShieldHealingAfterBreak; // 0xdc		
		bool m_bForceRegen; // 0xdd		
	};
};
