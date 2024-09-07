#pragma once
#include "animgraphlib/CMotionNode.hpp"
#include "animgraphlib/CParamSpanUpdater.hpp"
#include "animgraphlib/TagSpan_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x58
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CMotionGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		animgraphlib::CParamSpanUpdater m_paramSpans; // 0x10		
		CUtlVector<animgraphlib::TagSpan_t> m_tags; // 0x28		
		CSmartPtr<animgraphlib::CMotionNode> m_pRootNode; // 0x40		
		int32_t m_nParameterCount; // 0x48		
		int32_t m_nConfigStartIndex; // 0x4c		
		int32_t m_nConfigCount; // 0x50		
		bool m_bLoop; // 0x54		
	};
};
