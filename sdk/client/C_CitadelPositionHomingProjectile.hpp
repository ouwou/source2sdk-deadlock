#pragma once
#include "client/C_CitadelTrackedProjectile.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x8c8
	// Has VTable
	class C_CitadelPositionHomingProjectile : public client::C_CitadelTrackedProjectile
	{
	public:
		Vector m_vecHomingPosition; // 0x8b8		
	};
};
