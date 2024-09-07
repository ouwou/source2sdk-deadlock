#pragma once
#include "materialsystem2/BloomBlendMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
	// Alignment: 4
	// Size: 0x70
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct PostProcessingBloomParameters_t
	{
	public:
		materialsystem2::BloomBlendMode_t m_blendMode; // 0x0		
		float m_flBloomStrength; // 0x4		
		float m_flScreenBloomStrength; // 0x8		
		float m_flBlurBloomStrength; // 0xc		
		float m_flBloomThreshold; // 0x10		
		float m_flBloomThresholdWidth; // 0x14		
		float m_flSkyboxBloomStrength; // 0x18		
		float m_flBloomStartValue; // 0x1c		
		float m_flBlurWeight[5]; // 0x20		
		Vector m_vBlurTint[5]; // 0x34		
	};
};
