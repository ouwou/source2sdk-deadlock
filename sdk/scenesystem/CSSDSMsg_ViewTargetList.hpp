#pragma once
#include "scenesystem/CSSDSMsg_ViewTarget.hpp"
#include "scenesystem/SceneViewId_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::scenesystem
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	class CSSDSMsg_ViewTargetList
	{
	public:
		scenesystem::SceneViewId_t m_viewId; // 0x0		
		CUtlString m_ViewName; // 0x10		
		CUtlVector<scenesystem::CSSDSMsg_ViewTarget> m_Targets; // 0x18		
	};
};
