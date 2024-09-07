#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x48
	// 
	// MGetKV3ClassDefaults
	class CAnimBone
	{
	public:
		CBufferString m_name; // 0x0		
		int32_t m_parent; // 0x10		
		Vector m_pos; // 0x14		
		QuaternionStorage m_quat; // 0x20		
		float m_scale; // 0x30		
		QuaternionStorage m_qAlignment; // 0x34		
		int32_t m_flags; // 0x44		
	};
};
