#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x508
	// Has VTable
	class CCitadelZipLinePathNode : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		bool m_bCornerNode; // 0x4e0		
		bool m_bDisableZippingToByPlayers; // 0x4e1		
		bool m_bEnabled; // 0x4e2		
		bool m_bCapturable; // 0x4e3		
		bool m_bAlwaysUsable; // 0x4e4		
		bool m_bOneWay; // 0x4e5		
	private:
		[[maybe_unused]] uint8_t __pad04e6[0x2]; // 0x4e6
	public:
		CUtlSymbolLarge m_strGuardBossName; // 0x4e8		
		CUtlSymbolLarge m_strGuardBossName2; // 0x4f0		
		CUtlSymbolLarge m_strGuardBossName3; // 0x4f8		
		
		// Datamap fields:
		// void m_pNode; // 0x500
	};
};
