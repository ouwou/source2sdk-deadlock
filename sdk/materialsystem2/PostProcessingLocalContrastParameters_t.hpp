#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
	// Alignment: 4
	// Size: 0x14
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct PostProcessingLocalContrastParameters_t
	{
	public:
		float m_flLocalContrastStrength; // 0x0		
		float m_flLocalContrastEdgeStrength; // 0x4		
		float m_flLocalContrastVignetteStart; // 0x8		
		float m_flLocalContrastVignetteEnd; // 0xc		
		float m_flLocalContrastVignetteBlur; // 0x10		
	};
};
