#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	struct BoneDemoCaptureSettings_t
	{
	public:
		// MPropertyFriendlyName "Bone"
		// MPropertyAttributeChoiceName "Bone"
		CUtlString m_boneName; // 0x0		
		// MPropertySuppressField
		float m_flErrorSplineRotationMax; // 0x8		
		// MPropertySuppressField
		float m_flErrorSplineTranslationMax; // 0xc		
		// MPropertySuppressField
		float m_flErrorSplineScaleMax; // 0x10		
		// MPropertySuppressField
		float m_flErrorQuantizationRotationMax; // 0x14		
		// MPropertySuppressField
		float m_flErrorQuantizationTranslationMax; // 0x18		
		// MPropertySuppressField
		float m_flErrorQuantizationScaleMax; // 0x1c		
	};
};
