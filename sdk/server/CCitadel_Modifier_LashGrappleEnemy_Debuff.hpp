#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_Modifier_Stunned.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x2b0
	// Has VTable
	class CCitadel_Modifier_LashGrappleEnemy_Debuff : public server::CCitadel_Modifier_Stunned
	{
	public:
		Vector m_vCrashDir; // 0xd0		
		Vector m_vLiftTarget; // 0xdc		
		entity2::GameTime_t m_flStartTime; // 0xe8		
		bool m_bCrashingDown; // 0xec		
	};
};
