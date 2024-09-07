#pragma once
#include "animgraphlib/CAnimReplayFrame.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x70
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimGraphDebugReplay
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
	public:
		CUtlString m_animGraphFileName; // 0x40		
		CUtlVector<CSmartPtr<animgraphlib::CAnimReplayFrame>> m_frameList; // 0x48		
		int32_t m_startIndex; // 0x60		
		int32_t m_writeIndex; // 0x64		
		int32_t m_frameCount; // 0x68		
	};
};
