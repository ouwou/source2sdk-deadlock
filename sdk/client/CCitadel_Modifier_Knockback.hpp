#pragma once
#include "client/CCitadel_Modifier_Stunned.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	class CCitadel_Modifier_Knockback : public client::CCitadel_Modifier_Stunned
	{
	public:
		float m_flForce; // 0xc8		
		bool m_bKnockedBack; // 0xcc		
	};
};
