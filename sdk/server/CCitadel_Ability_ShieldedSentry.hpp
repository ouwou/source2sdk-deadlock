#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CNPC_SimpleAnimatingAI;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xe60
	// Has VTable
	class CCitadel_Ability_ShieldedSentry : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<CHandle<server::CNPC_SimpleAnimatingAI>> m_vecDeployedSentries; // 0xad8		
	};
};
