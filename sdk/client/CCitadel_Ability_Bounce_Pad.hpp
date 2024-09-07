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
	// Size: 0xd98
	// Has VTable
	// 
	// MNetworkVarNames "QAngle m_angFacing"
	class CCitadel_Ability_Bounce_Pad : public client::C_CitadelBaseAbility
	{
	public:
		Vector m_vForward; // 0xc60		
		bool m_bShouldDeploy; // 0xc6c		
		bool m_bAnglesSet; // 0xc6d		
		bool m_bCanCancel; // 0xc6e		
	private:
		[[maybe_unused]] uint8_t __pad0c6f[0x119]; // 0xc6f
	public:
		// MNetworkEnable
		QAngle m_angFacing; // 0xd88		
	};
};
