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
	// Size: 0x118
	// Has VTable
	class CCitadel_Modifier_Mirage_DjinnsReach_Chain : public server::CCitadelModifier
	{
	public:
		Vector m_vecOrigin; // 0xc8		
		CHandle<server::CBaseEntity> m_hPartner; // 0xd4		
		bool m_bMakeChainParticle; // 0xd8		
	};
};
