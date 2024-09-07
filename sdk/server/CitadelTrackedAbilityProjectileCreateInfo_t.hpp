#pragma once
#include "server/CitadelAbilityProjectileCreateInfo_t.hpp"
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
	// Size: 0x58
	struct CitadelTrackedAbilityProjectileCreateInfo_t : public server::CitadelAbilityProjectileCreateInfo_t
	{
	public:
		CHandle<server::CBaseEntity> m_hTrackedTarget; // 0x50		
	};
};
