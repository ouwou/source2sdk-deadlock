#pragma once
#include "animgraphlib/BinaryNodeTiming.hpp"
#include "animgraphlib/CAnimUpdateNodeBase.hpp"
#include "animgraphlib/CAnimUpdateNodeRef.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x88
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CBinaryUpdateNode : public animgraphlib::CAnimUpdateNodeBase
	{
	public:
		animgraphlib::CAnimUpdateNodeRef m_pChild1; // 0x58		
		animgraphlib::CAnimUpdateNodeRef m_pChild2; // 0x68		
		animgraphlib::BinaryNodeTiming m_timingBehavior; // 0x78		
		float m_flTimingBlend; // 0x7c		
		bool m_bResetChild1; // 0x80		
		bool m_bResetChild2; // 0x81		
	};
};
