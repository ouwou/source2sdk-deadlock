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
	// Size: 0xc10
	// Has VTable
	// 
	// MNetworkVarNames "QAngle m_angFacing"
	class CCitadel_Ability_Bounce_Pad : public server::CCitadelBaseAbility
	{
	public:
		Vector m_vForward; // 0xad8		
		bool m_bShouldDeploy; // 0xae4		
		bool m_bAnglesSet; // 0xae5		
		bool m_bCanCancel; // 0xae6		
	private:
		[[maybe_unused]] uint8_t __pad0ae7[0x119]; // 0xae7
	public:
		// MNetworkEnable
		QAngle m_angFacing; // 0xc00		
	};
};
