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
	// Size: 0xe0
	// Has VTable
	class CCitadel_Modifier_Basic_RangedArmorBonus : public server::CCitadelModifier
	{
	public:
		float m_flBulletResistancePctMin; // 0xc8		
		float m_flBulletResistancePctMax; // 0xcc		
		float m_flRangeMin; // 0xd0		
		float m_flRangeMax; // 0xd4		
		float m_flInvulnRange; // 0xd8		
	};
};
