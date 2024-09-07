#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
	// Alignment: 4
	// Size: 0x3c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct PostProcessingTonemapParameters_t
	{
	public:
		float m_flExposureBias; // 0x0		
		float m_flShoulderStrength; // 0x4		
		float m_flLinearStrength; // 0x8		
		float m_flLinearAngle; // 0xc		
		float m_flToeStrength; // 0x10		
		float m_flToeNum; // 0x14		
		float m_flToeDenom; // 0x18		
		float m_flWhitePoint; // 0x1c		
		float m_flLuminanceSource; // 0x20		
		float m_flExposureBiasShadows; // 0x24		
		float m_flExposureBiasHighlights; // 0x28		
		float m_flMinShadowLum; // 0x2c		
		float m_flMaxShadowLum; // 0x30		
		float m_flMinHighlightLum; // 0x34		
		float m_flMaxHighlightLum; // 0x38		
	};
};
