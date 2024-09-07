#pragma once
#include "client/ShotID_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x8
	// Has Trivial Destructor
	struct BulletID_t
	{
	public:
		client::ShotID_t m_ShotID; // 0x0		
		uint32_t m_nBulletIndex; // 0x4		
	};
};
