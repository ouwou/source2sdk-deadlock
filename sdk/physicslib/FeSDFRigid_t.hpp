#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0x48
	// 
	// MGetKV3ClassDefaults
	struct FeSDFRigid_t
	{
	public:
		Vector vLocalMin; // 0x0		
		Vector vLocalMax; // 0xc		
		uint16_t nNode; // 0x18		
		uint16_t nCollisionMask; // 0x1a		
		uint16_t nVertexMapIndex; // 0x1c		
		uint16_t nFlags; // 0x1e		
		CUtlVector<float> m_Distances; // 0x20		
		int32_t m_nWidth; // 0x38		
		int32_t m_nHeight; // 0x3c		
		int32_t m_nDepth; // 0x40		
	};
};
