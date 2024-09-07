#pragma once
#include "animationsystem/AnimationDecodeDebugDumpElement_t.hpp"
#include "animationsystem/AnimationProcessingType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	struct AnimationDecodeDebugDump_t
	{
	public:
		animationsystem::AnimationProcessingType_t m_processingType; // 0x0		
		CUtlVector<animationsystem::AnimationDecodeDebugDumpElement_t> m_elems; // 0x8		
	};
};
