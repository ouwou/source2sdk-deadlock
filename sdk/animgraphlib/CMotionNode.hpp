#pragma once
#include "modellib/AnimNodeID.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CMotionNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
	public:
		CUtlString m_name; // 0x18		
		modellib::AnimNodeID m_id; // 0x20		
	};
};
