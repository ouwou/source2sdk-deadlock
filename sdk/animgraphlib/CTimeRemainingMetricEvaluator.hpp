#pragma once
#include "animgraphlib/CMotionMetricEvaluator.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CTimeRemainingMetricEvaluator : public animgraphlib::CMotionMetricEvaluator
	{
	public:
		bool m_bMatchByTimeRemaining; // 0x50		
	private:
		[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
	public:
		float m_flMaxTimeRemaining; // 0x54		
		bool m_bFilterByTimeRemaining; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
	public:
		float m_flMinTimeRemaining; // 0x5c		
	};
};
