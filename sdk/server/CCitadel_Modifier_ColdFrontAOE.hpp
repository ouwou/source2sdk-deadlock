#pragma once
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
	// Size: 0x1c0
	// Has VTable
	class CCitadel_Modifier_ColdFrontAOE : public server::CCitadelModifier
	{
	public:
		CUtlVector<server::CBaseEntity*> m_vecDamagedTargets; // 0xc8		
	};
};
