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
	// Size: 0xd00
	// Has VTable
	class CCitadel_Ability_Stomp : public server::CCitadelBaseAbility
	{
	public:
		Vector m_vStompPos; // 0xad8		
		Vector m_vStompDir; // 0xae4		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecStompedEnemies; // 0xaf0		
	};
};
