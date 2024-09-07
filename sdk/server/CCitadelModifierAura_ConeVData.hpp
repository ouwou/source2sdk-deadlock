#pragma once
#include "server/CCitadelModifierAuraVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x640
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierAura_ConeVData : public server::CCitadelModifierAuraVData
	{
	public:
		float m_flAuraTargetingConeHalfWidth; // 0x638		
		float m_flAuraTargetingConeAngle; // 0x63c		
	};
};
