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
	// Size: 0x198
	// Has VTable
	class CCitadel_Modifier_Rutger_ForceField_PushOut : public server::CCitadelModifier
	{
	public:
		Vector m_vStart; // 0xc8		
		Vector m_vDest; // 0xd4		
		Vector m_vCenter; // 0xe0		
	};
};
