#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0xc
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct DynamicMeshDeformParams_t
	{
	public:
		float m_flTensionCompressScale; // 0x0		
		float m_flTensionStretchScale; // 0x4		
		bool m_bRecomputeSmoothNormalsAfterAnimation; // 0x8		
		bool m_bComputeDynamicMeshTensionAfterAnimation; // 0x9		
	};
};
