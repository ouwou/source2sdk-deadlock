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
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	class CSSDSMsg_LayerBase
	{
	public:
		scenesystem::SceneViewId_t m_viewId; // 0x0		
		CUtlString m_ViewName; // 0x10		
		int32_t m_nLayerIndex; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
	public:
		uint64_t m_nLayerId; // 0x20		
		CUtlString m_LayerName; // 0x28		
		CUtlString m_displayText; // 0x30		
	};
};
