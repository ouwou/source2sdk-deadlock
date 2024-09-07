#pragma once
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x608
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_DamageResistanceVData : public client::CCitadelModifierVData
	{
	public:
		float m_flDamageResistancePerSecond; // 0x5f8		
		float m_flTickInterval; // 0x5fc		
		float m_flDamageResistanceBonusPerGameMinute; // 0x600		
	};
};
