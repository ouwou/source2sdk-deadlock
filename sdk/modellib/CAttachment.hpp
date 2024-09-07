#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 16
	// Size: 0x90
	// 
	// MGetKV3ClassDefaults
	class CAttachment
	{
	public:
		CUtlString m_name; // 0x0		
		CUtlString m_influenceNames[3]; // 0x8		
		Quaternion m_vInfluenceRotations[3]; // 0x20		
		Vector m_vInfluenceOffsets[3]; // 0x50		
		float m_influenceWeights[3]; // 0x74		
		bool m_bInfluenceRootTransform[3]; // 0x80		
		uint8_t m_nInfluences; // 0x83		
		bool m_bIgnoreRotation; // 0x84		
	};
};
