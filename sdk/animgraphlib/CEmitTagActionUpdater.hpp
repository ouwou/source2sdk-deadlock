#pragma once
#include "animgraphlib/CAnimActionUpdater.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CEmitTagActionUpdater : public animgraphlib::CAnimActionUpdater
	{
	public:
		int32_t m_nTagIndex; // 0x18		
		bool m_bIsZeroDuration; // 0x1c		
	};
};
