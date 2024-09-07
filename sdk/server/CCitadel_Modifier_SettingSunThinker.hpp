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
	// Size: 0xf0
	// Has VTable
	class CCitadel_Modifier_SettingSunThinker : public server::CCitadelModifier
	{
	public:
		float m_flTickInterval; // 0xc8		
		float m_flRadius; // 0xcc		
		float m_CenterRadius; // 0xd0		
		float m_CenterDamage; // 0xd4		
		float m_OuterDamage; // 0xd8		
		float m_StunDuration; // 0xdc		
		float m_TargetingDuration; // 0xe0		
		float m_ShootDuration; // 0xe4		
		bool m_bTargetingCompleted; // 0xe8		
		bool m_bSecondHit; // 0xe9		
		bool m_bTwoHits; // 0xea		
	};
};
