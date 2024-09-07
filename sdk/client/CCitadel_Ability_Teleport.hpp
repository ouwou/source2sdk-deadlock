#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc88
	// Has VTable
	class CCitadel_Ability_Teleport : public client::C_CitadelBaseAbility
	{
	public:
		bool m_bTeleportingToTarget; // 0xc60		
	private:
		[[maybe_unused]] uint8_t __pad0c61[0x3]; // 0xc61
	public:
		Vector m_vTargetPosition; // 0xc64		
		QAngle m_vTargetAngles; // 0xc70		
	};
};
