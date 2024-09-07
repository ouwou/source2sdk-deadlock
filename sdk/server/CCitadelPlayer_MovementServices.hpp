#pragma once
#include "client/CNetworkVelocityVector.hpp"
#include "server/CPlayer_MovementServices_Humanoid.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x278
	// Has VTable
	// 
	// MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
	class CCitadelPlayer_MovementServices : public server::CPlayer_MovementServices_Humanoid
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		// MNetworkPriority "32"
		client::CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x228		
	private:
		[[maybe_unused]] uint8_t __pad0250[0x8]; // 0x250
	public:
		Vector m_vecPogoVelocity; // 0x258		
		Vector m_vecSupport; // 0x264		
		bool m_bColliding; // 0x270		
		bool m_bLandedOnGround; // 0x271		
		bool m_bHasFreeCursor; // 0x272		
	};
};
