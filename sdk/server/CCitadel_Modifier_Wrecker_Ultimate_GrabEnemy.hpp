#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x230
	// Has VTable
	class CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy : public server::CCitadelModifier
	{
	public:
		bool m_bAddedStasisParticle; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
	public:
		Vector m_vHoldOffset; // 0xcc		
		float m_flLastTouchTime; // 0xd8		
	};
};
