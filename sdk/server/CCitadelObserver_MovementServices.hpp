#pragma once
#include "server/CPlayer_MovementServices.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1e0
	// Has VTable
	class CCitadelObserver_MovementServices : public server::CPlayer_MovementServices
	{
	public:
		float m_flRoamingSpeed; // 0x1d8		
		bool m_bHasFreeCursor; // 0x1dc		
	};
};
