#pragma once
#include "client/CCitadel_Modifier_Tier3Boss_Base.hpp"
#include "entity2/GameTime_t.hpp"
#include "modellib/AttachmentHandle_t.hpp"
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
	// Size: 0x1c0
	// Has VTable
	class CCitadel_Modifier_Tier3Boss_LaserBeam : public client::CCitadel_Modifier_Tier3Boss_Base
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x8]; // 0xc0
	public:
		entity2::GameTime_t m_flSoundStartTime; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
	public:
		Vector m_vStart; // 0xd0		
		Vector m_vEnd; // 0xdc		
		Vector m_vPrevEnd; // 0xe8		
		float m_flAngleBetweenTrace; // 0xf4		
		float m_flPlayerDamagePerTick; // 0xf8		
		float m_flNPCDamagePerTick; // 0xfc		
		entity2::GameTime_t m_flNextDamageTick; // 0x100		
	private:
		[[maybe_unused]] uint8_t __pad0104[0x4]; // 0x104
	public:
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecEntitiesHit; // 0x108		
		float m_flDamageTickRate; // 0x120		
		entity2::GameTime_t m_flLastShakeTime; // 0x124		
		bool m_bSweepRightFirst; // 0x128		
	private:
		[[maybe_unused]] uint8_t __pad0129[0x3]; // 0x129
	public:
		Vector m_vecBeamTarget; // 0x12c		
		entity2::GameTime_t m_flLastBeamUpdateTime; // 0x138		
		Vector m_vecEnemyPosition; // 0x13c		
		int32_t m_nTrackingIndex; // 0x148		
		bool m_bPreviewMode; // 0x14c		
		modellib::AttachmentHandle_t m_hAttachment; // 0x14d		
	};
};
