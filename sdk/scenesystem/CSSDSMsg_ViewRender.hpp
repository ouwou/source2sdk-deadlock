#pragma once
#include "scenesystem/SceneViewId_t.hpp"
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
	class CSSDSMsg_ViewRender
	{
	public:
		scenesystem::SceneViewId_t m_viewId; // 0x0		
		CUtlString m_ViewName; // 0x10		
	};
};
