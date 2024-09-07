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
	// Size: 0x1c0
	// Has VTable
	class CCitadel_Modifier_ChargePullEnemy : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0xe0]; // 0xc8
	public:
		Vector m_vecOffsetDir; // 0x1a8		
		float m_flTackleRadius; // 0x1b4		
		float m_flPullTargetSpeed; // 0x1b8		
	};
};
