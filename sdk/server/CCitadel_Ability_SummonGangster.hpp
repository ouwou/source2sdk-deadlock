#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CNPC_YakuzaGangster;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb28
	// Has VTable
	class CCitadel_Ability_SummonGangster : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<CHandle<server::CNPC_YakuzaGangster>> m_vecGangsters; // 0xad8		
	};
};
