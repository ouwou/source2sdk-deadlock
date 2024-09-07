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
	// Size: 0xf0
	// Has VTable
	class CCitadel_Modifier_Teleport : public server::CCitadelModifier
	{
	public:
		Vector m_vDest; // 0xc8		
		QAngle m_angDestAngles; // 0xd4		
		Vector m_vDestVelocity; // 0xe0		
	};
};
