#pragma once
#include "server/CFuncBrush.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7d8
	// Has VTable
	class CCitadelZapTrigger : public server::CFuncBrush
	{
	public:
		float m_flShootAfterEnteringTime; // 0x788		
		float m_flWaitForNextShootTime; // 0x78c		
		float m_flPercentMaxHealthDamage; // 0x790		
	private:
		[[maybe_unused]] uint8_t __pad0794[0x4]; // 0x794
	public:
		CUtlSymbolLarge m_strShootOrigin; // 0x798		
	};
};
