#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	class CAnimBoneDifference
	{
	public:
		CBufferString m_name; // 0x0		
		CBufferString m_parent; // 0x10		
		Vector m_posError; // 0x20		
		bool m_bHasRotation; // 0x2c		
		bool m_bHasMovement; // 0x2d		
	};
};
