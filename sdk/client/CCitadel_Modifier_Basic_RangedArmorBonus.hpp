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
	// Size: 0xd8
	// Has VTable
	class CCitadel_Modifier_Basic_RangedArmorBonus : public client::CCitadelModifier
	{
	public:
		float m_flBulletResistancePctMin; // 0xc0		
		float m_flBulletResistancePctMax; // 0xc4		
		float m_flRangeMin; // 0xc8		
		float m_flRangeMax; // 0xcc		
		float m_flInvulnRange; // 0xd0		
	};
};
