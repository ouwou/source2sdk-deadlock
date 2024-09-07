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
	// Size: 0x1c8
	// Has VTable
	class CCitadel_Modifier_Mirage_DjinnsReach_Debuff : public server::CCitadelModifier
	{
	public:
		CHandle<server::CBaseEntity> m_hFirstPartner; // 0xc8		
		CHandle<server::CBaseEntity> m_hSecondPartner; // 0xcc		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecPartners; // 0xd0		
	};
};
