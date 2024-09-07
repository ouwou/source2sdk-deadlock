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
	class CCitadel_Modifier_HookTarget : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x4]; // 0xc8
	public:
		float m_flCurrentVerticalSpeed; // 0xcc		
		bool m_bSuccess; // 0xd0		
		bool m_bSameTeam; // 0xd1		
		bool m_bPlayedApproachingWhoosh; // 0xd2		
	private:
		[[maybe_unused]] uint8_t __pad00d3[0x1]; // 0xd3
	public:
		float m_flInitialTravelDistance; // 0xd4		
	};
};
