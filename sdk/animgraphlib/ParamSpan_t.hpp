#pragma once
#include "animationsystem/AnimParamType_t.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/ParamSpanSample_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	struct ParamSpan_t
	{
	public:
		CUtlVector<animgraphlib::ParamSpanSample_t> m_samples; // 0x0		
		animgraphlib::CAnimParamHandle m_hParam; // 0x18		
		animationsystem::AnimParamType_t m_eParamType; // 0x1a		
	private:
		[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
	public:
		float m_flStartCycle; // 0x1c		
		float m_flEndCycle; // 0x20		
	};
};
