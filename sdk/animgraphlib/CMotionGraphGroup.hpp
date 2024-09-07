#pragma once
#include "animgraphlib/CMotionGraph.hpp"
#include "animgraphlib/CMotionGraphConfig.hpp"
#include "animgraphlib/CMotionSearchDB.hpp"
#include "modellib/AnimScriptHandle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x108
	// 
	// MGetKV3ClassDefaults
	class CMotionGraphGroup
	{
	public:
		animgraphlib::CMotionSearchDB m_searchDB; // 0x0		
		CUtlVector<CSmartPtr<animgraphlib::CMotionGraph>> m_motionGraphs; // 0xb8		
		CUtlVector<animgraphlib::CMotionGraphConfig> m_motionGraphConfigs; // 0xd0		
		CUtlVector<int32_t> m_sampleToConfig; // 0xe8		
		modellib::AnimScriptHandle m_hIsActiveScript; // 0x100		
	};
};
