#pragma once
#include "entity2/GameTime_t.hpp"
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
	// Size: 0x10
	// Has Trivial Destructor
	struct CCitadel_Modifier_TechCleave__DamageTaken_t
	{
	public:
		float m_flDamageAmount; // 0x0		
		entity2::GameTime_t m_flTimeToExpire; // 0x4		
		CHandle<server::CBaseEntity> m_ProcAbility; // 0x8		
		CHandle<server::CBaseEntity> m_pTarget; // 0xc		
	};
};
