#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x70
	// 
	// MGetKV3ClassDefaults
	struct AnimationDecodeDebugDumpElement_t
	{
	public:
		int32_t m_nEntityIndex; // 0x0		
		CUtlString m_modelName; // 0x8		
		CUtlVector<CUtlString> m_poseParams; // 0x10		
		CUtlVector<CUtlString> m_decodeOps; // 0x28		
		CUtlVector<CUtlString> m_internalOps; // 0x40		
		CUtlVector<CUtlString> m_decodedAnims; // 0x58		
	};
};
