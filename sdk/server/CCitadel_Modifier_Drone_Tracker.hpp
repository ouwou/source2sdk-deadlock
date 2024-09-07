#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CNPC_FlyingDrone;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	class CCitadel_Modifier_Drone_Tracker : public server::CCitadelModifier
	{
	public:
		CHandle<server::CNPC_FlyingDrone> m_hDrone; // 0xc8		
	};
};
