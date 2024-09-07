#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	class CMorphBundleData
	{
	public:
		float m_flULeftSrc; // 0x0		
		float m_flVTopSrc; // 0x4		
		CUtlVector<float> m_offsets; // 0x8		
		CUtlVector<float> m_ranges; // 0x20		
	};
};
