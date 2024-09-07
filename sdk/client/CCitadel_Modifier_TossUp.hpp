#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd8
	// Has VTable
	class CCitadel_Modifier_TossUp : public client::CCitadelModifier
	{
	public:
		bool m_bForceApplied; // 0xc0		
		bool m_bLandedOnGround; // 0xc1		
	private:
		[[maybe_unused]] uint8_t __pad00c2[0x2]; // 0xc2
	public:
		Vector m_vTossUpForce; // 0xc4		
		float m_flCurrentVelocityScale; // 0xd0		
	};
};
