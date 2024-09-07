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
	// Size: 0x108
	// Has VTable
	class CCitadel_Modifier_WreckerScrapBlastDebuff : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x38]; // 0xc8
	public:
		float m_flEnemyMoveSlow; // 0x100		
	};
};
