#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x2c0
	// Has VTable
	class CCitadel_Modifier_Tier2Boss_LaserBeam : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
	public:
		bool m_bPreview; // 0x138		
	private:
		[[maybe_unused]] uint8_t __pad0139[0xb]; // 0x139
	public:
		entity2::GameTime_t m_flSoundStartTime; // 0x144		
	private:
		[[maybe_unused]] uint8_t __pad0148[0x4]; // 0x148
	public:
		Vector m_vStart; // 0x14c		
		Vector m_vEnd; // 0x158		
		Vector m_vPrevEnd; // 0x164		
		float m_flAngleBetweenTrace; // 0x170		
		float m_flDamagePerTick; // 0x174		
		float m_flCreepDamagePerTick; // 0x178		
		entity2::GameTime_t m_flNextDamageTick; // 0x17c		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit; // 0x180		
		float m_flDamageTickRate; // 0x198		
		entity2::GameTime_t m_flLastShakeTime; // 0x19c		
		bool m_bSweepRightFirst; // 0x1a0		
	private:
		[[maybe_unused]] uint8_t __pad01a1[0x3]; // 0x1a1
	public:
		QAngle m_angBeamAim; // 0x1a4		
		Vector m_vecBeamTarget; // 0x1b0		
		entity2::GameTime_t m_flLastBeamUpdateTime; // 0x1bc		
	private:
		[[maybe_unused]] uint8_t __pad01c0[0x18]; // 0x1c0
	public:
		entity2::GameTime_t m_flTargetingTaskStartTime; // 0x1d8		
		float m_flTrackVel; // 0x1dc		
	};
};
