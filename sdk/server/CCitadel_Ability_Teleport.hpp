#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb00
	// Has VTable
	class CCitadel_Ability_Teleport : public server::CCitadelBaseAbility
	{
	public:
		bool m_bTeleportingToTarget; // 0xad8		
	private:
		[[maybe_unused]] uint8_t __pad0ad9[0x3]; // 0xad9
	public:
		Vector m_vTargetPosition; // 0xadc		
		QAngle m_vTargetAngles; // 0xae8		
	};
};
