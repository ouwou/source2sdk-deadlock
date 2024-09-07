#pragma once
#include "animgraphlib/CMotionSearchNode.hpp"
#include "animgraphlib/CProductQuantizer.hpp"
#include "animgraphlib/MotionDBIndex.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xb8
	// 
	// MGetKV3ClassDefaults
	class CMotionSearchDB
	{
	public:
		animgraphlib::CMotionSearchNode m_rootNode; // 0x0		
		animgraphlib::CProductQuantizer m_residualQuantizer; // 0x80		
		CUtlVector<animgraphlib::MotionDBIndex> m_codeIndices; // 0xa0		
	};
};
