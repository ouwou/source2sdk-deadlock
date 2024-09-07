#pragma once
#include "server/CCitadel_Modifier_Stunned.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd8
	// Has VTable
	class CCitadel_Modifier_Knockback : public server::CCitadel_Modifier_Stunned
	{
	public:
		float m_flForce; // 0xd0		
		bool m_bKnockedBack; // 0xd4		
	};
};
