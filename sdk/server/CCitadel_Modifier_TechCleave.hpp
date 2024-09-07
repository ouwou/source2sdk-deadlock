#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_TechCleave__DamageTaken_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x118
	// Has VTable
	class CCitadel_Modifier_TechCleave : public server::CCitadelModifier
	{
	public:
		CUtlVector<server::CCitadel_Modifier_TechCleave__DamageTaken_t> m_vDamageTakenEvents; // 0xc8		
	};
};
