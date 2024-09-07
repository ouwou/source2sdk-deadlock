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
	// Size: 0x278
	// Has VTable
	class CCitadel_Modifier_BurstFire_Actuator : public client::CCitadelModifier
	{
	public:
		bool m_bLastShotInFlight; // 0xc0		
		bool m_bBonusTracked; // 0xc1		
	private:
		[[maybe_unused]] uint8_t __pad00c2[0x2]; // 0xc2
	public:
		int32_t m_nHitCounter; // 0xc4		
		int32_t m_nTotalBurstFireShots; // 0xc8		
		int32_t m_nInitialzedClipSize; // 0xcc		
		int32_t m_nBonusPitch; // 0xd0		
		bool m_bInitialized; // 0xd4		
	private:
		[[maybe_unused]] uint8_t __pad00d5[0x3]; // 0xd5
	public:
		int32_t m_nIncreasedBurstShotCount; // 0xd8		
		float m_flIntraBurstCycleTime; // 0xdc		
		float m_flCycleTimePct; // 0xe0		
		float m_flMaxCycleTimeOverride; // 0xe4		
		float m_flMaxBurstFireCooldownOverride; // 0xe8		
	};
};
