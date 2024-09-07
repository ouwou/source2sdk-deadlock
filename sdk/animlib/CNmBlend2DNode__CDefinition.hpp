#pragma once
#include "animlib/CNmPoseNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x110
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmBlend2DNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		CUtlVectorFixedGrowable<int16_t,5> m_sourceNodeIndices; // 0x10		
		int16_t m_nInputParameterNodeIdx0; // 0x38		
		int16_t m_nInputParameterNodeIdx1; // 0x3a		
	private:
		[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
	public:
		CUtlVectorFixedGrowable<Vector2D,10> m_values; // 0x40		
		CUtlVectorFixedGrowable<uint8_t,30> m_indices; // 0xa8		
		CUtlVectorFixedGrowable<uint8_t,10> m_hullIndices; // 0xe0		
		bool m_bAllowLooping; // 0x108		
	};
};
