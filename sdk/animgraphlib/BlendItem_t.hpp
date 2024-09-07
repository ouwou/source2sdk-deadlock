#pragma once
#include "animationsystem/HSequence.hpp"
#include "animgraphlib/CAnimUpdateNodeRef.hpp"
#include "animgraphlib/TagSpan_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x40
	// 
	// MGetKV3ClassDefaults
	struct BlendItem_t
	{
	public:
		CUtlVector<animgraphlib::TagSpan_t> m_tags; // 0x0		
		animgraphlib::CAnimUpdateNodeRef m_pChild; // 0x18		
		animationsystem::HSequence m_hSequence; // 0x28		
		Vector2D m_vPos; // 0x2c		
		float m_flDuration; // 0x34		
		bool m_bUseCustomDuration; // 0x38		
	};
};
