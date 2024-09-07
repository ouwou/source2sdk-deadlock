#pragma once
#include "animgraphlib/CMotionNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x10
	// 
	// MGetKV3ClassDefaults
	class MotionBlendItem
	{
	public:
		CSmartPtr<animgraphlib::CMotionNode> m_pChild; // 0x0		
		float m_flKeyValue; // 0x8		
	};
};
