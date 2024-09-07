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
	// Size: 0xae0
	// Has VTable
	class CCitadel_Ability_Fealty : public server::CCitadelBaseAbility
	{
	public:
		CHandle<server::CBaseEntity> m_hTarget; // 0xad8		
	};
};
