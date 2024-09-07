#pragma once
#include "entity2/GameTime_t.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include "server/CCitadel_Modifier_Tier3Boss_Base.hpp"
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
	// Size: 0x1c8
	// Has VTable
	class CCitadel_Modifier_Tier3Boss_LaserBeam : public server::CCitadel_Modifier_Tier3Boss_Base
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x8]; // 0xc8
	public:
		entity2::GameTime_t m_flSoundStartTime; // 0xd0		
	private:
		[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
	public:
		Vector m_vStart; // 0xd8		
		Vector m_vEnd; // 0xe4		
		Vector m_vPrevEnd; // 0xf0		
		float m_flAngleBetweenTrace; // 0xfc		
		float m_flPlayerDamagePerTick; // 0x100		
		float m_flNPCDamagePerTick; // 0x104		
		entity2::GameTime_t m_flNextDamageTick; // 0x108		
	private:
		[[maybe_unused]] uint8_t __pad010c[0x4]; // 0x10c
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit; // 0x110		
		float m_flDamageTickRate; // 0x128		
		entity2::GameTime_t m_flLastShakeTime; // 0x12c		
		bool m_bSweepRightFirst; // 0x130		
	private:
		[[maybe_unused]] uint8_t __pad0131[0x3]; // 0x131
	public:
		Vector m_vecBeamTarget; // 0x134		
		entity2::GameTime_t m_flLastBeamUpdateTime; // 0x140		
		Vector m_vecEnemyPosition; // 0x144		
		int32_t m_nTrackingIndex; // 0x150		
		bool m_bPreviewMode; // 0x154		
		modellib::AttachmentHandle_t m_hAttachment; // 0x155		
	};
};
