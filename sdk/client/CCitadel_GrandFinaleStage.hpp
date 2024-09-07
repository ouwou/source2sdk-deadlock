#pragma once
#include "client/CBaseAnimGraph.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xab8
	// Has VTable
	class CCitadel_GrandFinaleStage : public client::CBaseAnimGraph
	{
	public:
		Vector m_vStartPos; // 0xa90		
		Vector m_vEndPos; // 0xa9c		
		entity2::GameTime_t m_flStartEmitTime; // 0xaa8		
		entity2::GameTime_t m_flEndEmitTime; // 0xaac		
		int32_t m_nTouchCount; // 0xab0		
	};
};
