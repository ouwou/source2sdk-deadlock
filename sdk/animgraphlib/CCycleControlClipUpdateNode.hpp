#pragma once
#include "animationsystem/HSequence.hpp"
#include "animgraphlib/AnimValueSource.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CLeafUpdateNode.hpp"
#include "animgraphlib/TagSpan_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x90
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCycleControlClipUpdateNode : public animgraphlib::CLeafUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
	public:
		CUtlVector<animgraphlib::TagSpan_t> m_tags; // 0x60		
	private:
		[[maybe_unused]] uint8_t __pad0078[0x4]; // 0x78
	public:
		animationsystem::HSequence m_hSequence; // 0x7c		
		float m_duration; // 0x80		
		animgraphlib::AnimValueSource m_valueSource; // 0x84		
		animgraphlib::CAnimParamHandle m_paramIndex; // 0x88		
	};
};
