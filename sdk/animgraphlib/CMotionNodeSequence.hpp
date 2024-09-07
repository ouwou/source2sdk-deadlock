#pragma once
#include "animationsystem/HSequence.hpp"
#include "animgraphlib/CMotionNode.hpp"
#include "animgraphlib/TagSpan_t.hpp"
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
	class CMotionNodeSequence : public animgraphlib::CMotionNode
	{
	public:
		CUtlVector<animgraphlib::TagSpan_t> m_tags; // 0x28		
		animationsystem::HSequence m_hSequence; // 0x40		
		float m_flPlaybackSpeed; // 0x44		
	};
};
