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
	// Size: 0xe0
	// Has VTable
	class CCitadel_Modifier_TossUp : public server::CCitadelModifier
	{
	public:
		bool m_bForceApplied; // 0xc8		
		bool m_bLandedOnGround; // 0xc9		
	private:
		[[maybe_unused]] uint8_t __pad00ca[0x2]; // 0xca
	public:
		Vector m_vTossUpForce; // 0xcc		
		float m_flCurrentVelocityScale; // 0xd8		
	};
};
