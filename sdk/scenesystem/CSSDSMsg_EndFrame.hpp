#pragma once
#include "scenesystem/CSSDSEndFrameViewInfo.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::scenesystem
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	class CSSDSMsg_EndFrame
	{
	public:
		CUtlVector<scenesystem::CSSDSEndFrameViewInfo> m_Views; // 0x0		
	};
};
