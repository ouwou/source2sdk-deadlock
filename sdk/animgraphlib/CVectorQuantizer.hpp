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
	class CVectorQuantizer
	{
	public:
		CUtlVector<float> m_centroidVectors; // 0x0		
		int32_t m_nCentroids; // 0x18		
		int32_t m_nDimensions; // 0x1c		
	};
};
