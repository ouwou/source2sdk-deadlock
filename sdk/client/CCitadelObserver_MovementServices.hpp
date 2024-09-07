#pragma once
#include "client/CPlayer_MovementServices.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1e0
	// Has VTable
	class CCitadelObserver_MovementServices : public client::CPlayer_MovementServices
	{
	public:
		float m_flRoamingSpeed; // 0x1d8		
		bool m_bHasFreeCursor; // 0x1dc		
	};
};
