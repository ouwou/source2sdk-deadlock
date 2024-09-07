#pragma once
#include "animgraphlib/CLeafUpdateNode.hpp"
#include "animgraphlib/CMotionGraph.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x68
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CMotionGraphUpdateNode : public animgraphlib::CLeafUpdateNode
	{
	public:
		CSmartPtr<animgraphlib::CMotionGraph> m_pMotionGraph; // 0x58		
	};
};
