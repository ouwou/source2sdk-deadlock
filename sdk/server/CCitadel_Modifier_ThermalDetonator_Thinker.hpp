#pragma once
#include "server/CCitadelModifierAura.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x298
	// Has VTable
	class CCitadel_Modifier_ThermalDetonator_Thinker : public server::CCitadelModifierAura
	{
	public:
		Vector m_vecOrigin; // 0xe8		
		Vector m_vecWorldSpaceMins; // 0xf4		
		Vector m_vecWorldSpaceMaxs; // 0x100		
	};
};
