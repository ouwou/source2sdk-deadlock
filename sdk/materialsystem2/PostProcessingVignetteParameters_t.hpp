#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
	// Alignment: 4
	// Size: 0x24
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct PostProcessingVignetteParameters_t
	{
	public:
		float m_flVignetteStrength; // 0x0		
		Vector2D m_vCenter; // 0x4		
		float m_flRadius; // 0xc		
		float m_flRoundness; // 0x10		
		float m_flFeather; // 0x14		
		Vector m_vColorTint; // 0x18		
	};
};
