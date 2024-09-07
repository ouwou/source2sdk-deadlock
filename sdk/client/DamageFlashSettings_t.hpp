#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct DamageFlashSettings_t
	{
	public:
		float m_flDuration; // 0x0		
		float m_flCoverage; // 0x4		
		float m_flHardness; // 0x8		
		float m_flBrightness; // 0xc		
		float m_flBrightnessInLightSensitivityMode; // 0x10		
		Color m_Color; // 0x14		
	};
};
