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
	// Size: 0x1b0
	// Has VTable
	class CCitadel_Modifier_Chomp_Grapple : public server::CCitadelModifier
	{
	public:
		CHandle<server::CBaseEntity> m_hMoveToTarget; // 0xc8		
	};
};
