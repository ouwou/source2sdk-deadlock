#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x50
	struct CitadelAbilityProjectileCreateInfo_t
	{
	public:
		Vector m_vecCreatePosition; // 0x0		
		QAngle m_angAngles; // 0xc		
		Vector m_vecVelocity; // 0x18		
		float m_flGravity; // 0x24		
		float m_flLifeTime; // 0x28		
		bool m_bPrimaryAttack; // 0x2c		
		bool m_bWantsInitialVelocity; // 0x2d		
	private:
		[[maybe_unused]] uint8_t __pad002e[0x2]; // 0x2e
	public:
		float m_flChargeAmount; // 0x30		
		float m_flArmingTime; // 0x34		
		CUtlString m_sOverrideClassName; // 0x38		
		bool m_bShouldHitThrower; // 0x40		
		bool m_bLagCompensatePosition; // 0x41		
	private:
		[[maybe_unused]] uint8_t __pad0042[0x2]; // 0x42
	public:
		float m_flHitThrowerDelay; // 0x44		
	};
};
