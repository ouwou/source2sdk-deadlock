#pragma once
#include "server/CCitadelProjectile.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x850
	// Has VTable
	class CCitadel_Projectile_BloodBomb : public server::CCitadelProjectile
	{
	public:
		bool m_bSecondBomb; // 0x820		
	private:
		[[maybe_unused]] uint8_t __pad0821[0x3]; // 0x821
	public:
		int32_t m_nBeepSoundBuildupCount; // 0x824		
		float m_flBeepSoundIntervalBias; // 0x828		
		float m_flBeepSoundMaxFrequency; // 0x82c		
		float m_flArmingDuration; // 0x830		
	private:
		[[maybe_unused]] uint8_t __pad0834[0x4]; // 0x834
	public:
		CUtlVector<float> m_vecBeepIntervals; // 0x838		
	};
};
