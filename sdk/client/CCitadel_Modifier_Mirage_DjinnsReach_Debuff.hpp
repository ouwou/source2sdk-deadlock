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
	// Size: 0x1c0
	// Has VTable
	class CCitadel_Modifier_Mirage_DjinnsReach_Debuff : public client::CCitadelModifier
	{
	public:
		CHandle<client::C_BaseEntity> m_hFirstPartner; // 0xc0		
		CHandle<client::C_BaseEntity> m_hSecondPartner; // 0xc4		
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecPartners; // 0xc8		
	};
};
