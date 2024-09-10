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
	// Size: 0xb68
	// Has VTable
	class C_Citadel_FissureWall : public client::CBaseAnimGraph
	{
	public:
		Vector m_vStartPos; // 0xb40		
		Vector m_vEndPos; // 0xb4c		
		entity2::GameTime_t m_flStartEmitTime; // 0xb58		
		entity2::GameTime_t m_flEndEmitTime; // 0xb5c		
		bool m_bSolid; // 0xb60		
	private:
		[[maybe_unused]] uint8_t __pad0b61[0x3]; // 0xb61
	public:
		int32_t m_nTouchCount; // 0xb64		
	};
};
