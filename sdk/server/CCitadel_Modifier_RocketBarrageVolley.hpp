#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x358
	// Has VTable
	class CCitadel_Modifier_RocketBarrageVolley : public server::CCitadelModifier
	{
	public:
		float m_flFiringInterval; // 0xc8		
		entity2::GameTime_t m_flCastTime; // 0xcc		
		entity2::GameTime_t m_flNextRocketTime; // 0xd0		
		int32_t m_nGrenadesLeft; // 0xd4		
	};
};
