#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x110
	// Has VTable
	class CCitadel_Modifier_Mirage_DjinnsReach_Chain : public client::CCitadelModifier
	{
	public:
		Vector m_vecOrigin; // 0xc0		
		CHandle<client::C_BaseEntity> m_hPartner; // 0xcc		
		bool m_bMakeChainParticle; // 0xd0		
	};
};
