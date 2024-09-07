#pragma once
#include "client/ShotID_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8
	// Has Trivial Destructor
	struct CCitadel_Modifier_ExplosiveShots__BulletEntityPair_t
	{
	public:
		CHandle<server::CBaseEntity> m_hEntHit; // 0x0		
		client::ShotID_t m_ShotHit; // 0x4		
	};
};
