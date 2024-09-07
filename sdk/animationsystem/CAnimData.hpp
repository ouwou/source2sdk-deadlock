#pragma once
#include "animationsystem/CAnimDecoder.hpp"
#include "animationsystem/CAnimDesc.hpp"
#include "animationsystem/CAnimFrameSegment.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x70
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimData
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		CBufferString m_name; // 0x10		
		CUtlVector<animationsystem::CAnimDesc> m_animArray; // 0x20		
		CUtlVector<animationsystem::CAnimDecoder> m_decoderArray; // 0x38		
		int32_t m_nMaxUniqueFrameIndex; // 0x50		
	private:
		[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
	public:
		CUtlVector<animationsystem::CAnimFrameSegment> m_segmentArray; // 0x58		
	};
};
