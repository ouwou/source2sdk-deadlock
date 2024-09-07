#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0x24
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct RenderHairStrandInfo_t
	{
	public:
		uint32_t m_nGuideHairIndices_nSurfaceTriIndex[2]; // 0x0		
		uint16_t m_vGuideBary_vBaseBary[4]; // 0x8		
		uint16_t m_vRootOffset_flLengthScale[4]; // 0x10		
		uint16_t m_nPackedBaseUv[2]; // 0x18		
		uint32_t m_nPackedSurfaceNormalOs; // 0x1c		
		uint32_t m_nPackedSurfaceTangentOs; // 0x20		
	};
};
