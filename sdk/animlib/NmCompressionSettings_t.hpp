#pragma once
#include "animlib/NmCompressionSettings_t__QuantizationRange_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 16
	// Size: 0x40
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct NmCompressionSettings_t
	{
	public:
		animlib::NmCompressionSettings_t__QuantizationRange_t m_translationRangeX; // 0x0		
		animlib::NmCompressionSettings_t__QuantizationRange_t m_translationRangeY; // 0x8		
		animlib::NmCompressionSettings_t__QuantizationRange_t m_translationRangeZ; // 0x10		
		animlib::NmCompressionSettings_t__QuantizationRange_t m_scaleRange; // 0x18		
		Quaternion m_constantRotation; // 0x20		
		bool m_bIsRotationStatic; // 0x30		
		bool m_bIsTranslationStatic; // 0x31		
		bool m_bIsScaleStatic; // 0x32		
	};
};
