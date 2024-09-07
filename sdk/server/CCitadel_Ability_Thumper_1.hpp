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
	// Size: 0xc98
	// Has VTable
	class CCitadel_Ability_Thumper_1 : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities; // 0xad8		
		Vector m_vecAimPos; // 0xaf0		
		Vector m_vecAimNormal; // 0xafc		
		float m_flPushForce; // 0xb08		
	};
};
