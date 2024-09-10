#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CBaseAnimGraph.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9c8
	// Has VTable
	class CCitadel_GrandFinaleStage : public server::CBaseAnimGraph
	{
	public:
		Vector m_vStartPos; // 0x9a0		
		Vector m_vEndPos; // 0x9ac		
		entity2::GameTime_t m_flStartEmitTime; // 0x9b8		
		entity2::GameTime_t m_flEndEmitTime; // 0x9bc		
		int32_t m_nTouchCount; // 0x9c0		
	};
};
