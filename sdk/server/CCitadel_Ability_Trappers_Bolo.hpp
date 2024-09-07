#pragma once
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0xc50
	// Has VTable
	class CCitadel_Ability_Trappers_Bolo : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x38]; // 0xad8
	public:
		CHandle<server::CBaseEntity> m_hProjectile; // 0xb10		
		CHandle<server::CBaseEntity> m_hNextTarget; // 0xb14		
		CUtlVector<CHandle<server::CBaseEntity>> m_hHitTargets; // 0xb18		
		int32_t m_iBounces; // 0xb30		
		bool m_bReturning; // 0xb34		
	};
};
