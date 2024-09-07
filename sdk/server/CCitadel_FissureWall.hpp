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
	// Size: 0x9a0
	// Has VTable
	class CCitadel_FissureWall : public server::CBaseAnimGraph
	{
	public:
		Vector m_vStartPos; // 0x978		
		Vector m_vEndPos; // 0x984		
		entity2::GameTime_t m_flStartEmitTime; // 0x990		
		entity2::GameTime_t m_flEndEmitTime; // 0x994		
		bool m_bSolid; // 0x998		
	private:
		[[maybe_unused]] uint8_t __pad0999[0x3]; // 0x999
	public:
		int32_t m_nTouchCount; // 0x99c		
	};
};
