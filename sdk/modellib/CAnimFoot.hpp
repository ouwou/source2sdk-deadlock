#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	class CAnimFoot
	{
	public:
		CUtlString m_name; // 0x0		
		Vector m_vBallOffset; // 0x8		
		Vector m_vHeelOffset; // 0x14		
		int32_t m_ankleBoneIndex; // 0x20		
		int32_t m_toeBoneIndex; // 0x24		
	};
};
