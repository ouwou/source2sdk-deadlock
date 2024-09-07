#pragma once
#include "client/CCitadelModifier.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x2b8
	// Has VTable
	class CCitadel_Modifier_Tier2Boss_LaserBeam : public client::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
	public:
		bool m_bPreview; // 0x130		
	private:
		[[maybe_unused]] uint8_t __pad0131[0xb]; // 0x131
	public:
		entity2::GameTime_t m_flSoundStartTime; // 0x13c		
	private:
		[[maybe_unused]] uint8_t __pad0140[0x4]; // 0x140
	public:
		Vector m_vStart; // 0x144		
		Vector m_vEnd; // 0x150		
		Vector m_vPrevEnd; // 0x15c		
		float m_flAngleBetweenTrace; // 0x168		
		float m_flDamagePerTick; // 0x16c		
		float m_flCreepDamagePerTick; // 0x170		
		entity2::GameTime_t m_flNextDamageTick; // 0x174		
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecEntitiesHit; // 0x178		
		float m_flDamageTickRate; // 0x190		
		entity2::GameTime_t m_flLastShakeTime; // 0x194		
		bool m_bSweepRightFirst; // 0x198		
	private:
		[[maybe_unused]] uint8_t __pad0199[0x3]; // 0x199
	public:
		QAngle m_angBeamAim; // 0x19c		
		Vector m_vecBeamTarget; // 0x1a8		
		entity2::GameTime_t m_flLastBeamUpdateTime; // 0x1b4		
	private:
		[[maybe_unused]] uint8_t __pad01b8[0x18]; // 0x1b8
	public:
		entity2::GameTime_t m_flTargetingTaskStartTime; // 0x1d0		
		float m_flTrackVel; // 0x1d4		
	};
};
