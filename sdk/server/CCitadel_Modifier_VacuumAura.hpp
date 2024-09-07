#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifierAura.hpp"
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
	// Size: 0x290
	// Has VTable
	class CCitadel_Modifier_VacuumAura : public server::CCitadelModifierAura
	{
	private:
		[[maybe_unused]] uint8_t __pad00e8[0x188]; // 0xe8
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_hEnemyHeroInVacuum; // 0x270		
		int32_t m_nNumPlayersKilled; // 0x288		
		entity2::GameTime_t m_tLastDamageTime; // 0x28c		
	};
};
