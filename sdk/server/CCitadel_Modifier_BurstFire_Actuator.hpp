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
	// Size: 0x280
	// Has VTable
	class CCitadel_Modifier_BurstFire_Actuator : public server::CCitadelModifier
	{
	public:
		bool m_bLastShotInFlight; // 0xc8		
		bool m_bBonusTracked; // 0xc9		
	private:
		[[maybe_unused]] uint8_t __pad00ca[0x2]; // 0xca
	public:
		int32_t m_nHitCounter; // 0xcc		
		int32_t m_nTotalBurstFireShots; // 0xd0		
		int32_t m_nInitialzedClipSize; // 0xd4		
		int32_t m_nBonusPitch; // 0xd8		
		bool m_bInitialized; // 0xdc		
	private:
		[[maybe_unused]] uint8_t __pad00dd[0x3]; // 0xdd
	public:
		int32_t m_nIncreasedBurstShotCount; // 0xe0		
		float m_flIntraBurstCycleTime; // 0xe4		
		float m_flCycleTimePct; // 0xe8		
		float m_flMaxCycleTimeOverride; // 0xec		
		float m_flMaxBurstFireCooldownOverride; // 0xf0		
	};
};
