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
	// Size: 0x218
	// Has VTable
	class CCitadel_Modifier_BulletFlurry : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x118]; // 0xc8
	public:
		float m_flRadius; // 0x1e0		
	private:
		[[maybe_unused]] uint8_t __pad01e4[0x4]; // 0x1e4
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecShootTargets; // 0x1e8		
		int32_t m_nNumPlayersKilled; // 0x200		
		int32_t m_nShootIndex; // 0x204		
		int32_t m_nShootIndexNPC; // 0x208		
		int32_t m_nBurstShots; // 0x20c		
		entity2::GameTime_t m_flNextAttackTime; // 0x210		
	};
};
