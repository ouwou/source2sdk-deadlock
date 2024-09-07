#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	class CCitadel_Modifier_RespawnCredit : public server::CCitadelModifier
	{
	public:
		bool m_bActivated; // 0xc8		
		bool m_bSpokeAboutToExpire; // 0xc9		
	};
};
