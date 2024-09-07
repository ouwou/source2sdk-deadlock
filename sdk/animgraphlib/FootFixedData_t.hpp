#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0x50
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FootFixedData_t
	{
	public:
		VectorAligned m_vToeOffset; // 0x0		
		VectorAligned m_vHeelOffset; // 0x10		
		int32_t m_nTargetBoneIndex; // 0x20		
		int32_t m_nAnkleBoneIndex; // 0x24		
		int32_t m_nIKAnchorBoneIndex; // 0x28		
		int32_t m_ikChainIndex; // 0x2c		
		float m_flMaxIKLength; // 0x30		
		int32_t m_nFootIndex; // 0x34		
		int32_t m_nTagIndex; // 0x38		
		float m_flMaxRotationLeft; // 0x3c		
		float m_flMaxRotationRight; // 0x40		
	};
};
