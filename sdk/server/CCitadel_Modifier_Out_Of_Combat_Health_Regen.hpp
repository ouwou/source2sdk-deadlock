#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x140
	// Has VTable
	class CCitadel_Modifier_Out_Of_Combat_Health_Regen : public server::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_LastDamageTaken; // 0xc8		
	};
};
