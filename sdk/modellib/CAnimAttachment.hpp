#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 16
	// Size: 0x80
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CAnimAttachment
	{
	public:
		Quaternion m_influenceRotations[3]; // 0x0		
		VectorAligned m_influenceOffsets[3]; // 0x30		
		int32_t m_influenceIndices[3]; // 0x60		
		float m_influenceWeights[3]; // 0x6c		
		uint8_t m_numInfluences; // 0x78		
	};
};
