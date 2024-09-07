#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe8
	// Has VTable
	class CCitadel_Modifier_TeleportToObjective : public client::CCitadelModifier
	{
	public:
		Vector m_vDest; // 0xc0		
		QAngle m_angDestAngles; // 0xcc		
		Vector m_vDestVelocity; // 0xd8		
	};
};
