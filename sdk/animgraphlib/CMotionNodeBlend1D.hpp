#pragma once
#include "animgraphlib/CMotionNode.hpp"
#include "animgraphlib/MotionBlendItem.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CMotionNodeBlend1D : public animgraphlib::CMotionNode
	{
	public:
		CUtlVector<animgraphlib::MotionBlendItem> m_blendItems; // 0x28		
		int32_t m_nParamIndex; // 0x40		
	};
};
