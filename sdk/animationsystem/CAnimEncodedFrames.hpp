#pragma once
#include "animationsystem/CAnimEncodeDifference.hpp"
#include "animationsystem/CAnimFrameBlockAnim.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0xd8
	// 
	// MGetKV3ClassDefaults
	class CAnimEncodedFrames
	{
	public:
		CBufferString m_fileName; // 0x0		
		int32_t m_nFrames; // 0x10		
		int32_t m_nFramesPerBlock; // 0x14		
		CUtlVector<animationsystem::CAnimFrameBlockAnim> m_frameblockArray; // 0x18		
		animationsystem::CAnimEncodeDifference m_usageDifferences; // 0x30		
	};
};
