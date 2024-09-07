#pragma once
#include "animgraphlib/TagSpan_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	class CSequenceTagSpans
	{
	public:
		CGlobalSymbol m_sSequenceName; // 0x0		
		CUtlVector<animgraphlib::TagSpan_t> m_tags; // 0x8		
	};
};
