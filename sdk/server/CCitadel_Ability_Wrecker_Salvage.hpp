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
	// Size: 0xc08
	// Has VTable
	class CCitadel_Ability_Wrecker_Salvage : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecTargets; // 0xad8		
	};
};
