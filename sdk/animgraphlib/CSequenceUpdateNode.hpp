#pragma once
#include "animationsystem/HSequence.hpp"
#include "animgraphlib/CParamSpanUpdater.hpp"
#include "animgraphlib/CSequenceUpdateNodeBase.hpp"
#include "animgraphlib/TagSpan_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSequenceUpdateNode : public animgraphlib::CSequenceUpdateNodeBase
	{
	public:
		animationsystem::HSequence m_hSequence; // 0x70		
		float m_duration; // 0x74		
		animgraphlib::CParamSpanUpdater m_paramSpans; // 0x78		
		CUtlVector<animgraphlib::TagSpan_t> m_tags; // 0x90		
	};
};
