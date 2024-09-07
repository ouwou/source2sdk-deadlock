#pragma once
#include "client/CCitadel_Modifier_Stunned.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x2a8
	// Has VTable
	class CCitadel_Modifier_LashGrappleEnemy_Debuff : public client::CCitadel_Modifier_Stunned
	{
	public:
		Vector m_vCrashDir; // 0xc8		
		Vector m_vLiftTarget; // 0xd4		
		entity2::GameTime_t m_flStartTime; // 0xe0		
		bool m_bCrashingDown; // 0xe4		
	};
};
