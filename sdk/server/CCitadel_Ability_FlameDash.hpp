#pragma once
#include "server/CCitadelAutoScaledTime.hpp"
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0xca0
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelAutoScaledTime m_flDashEndTime"
	// MNetworkVarNames "bool m_bIsSpeedBursting"
	class CCitadel_Ability_FlameDash : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities; // 0xad8		
		// MNetworkEnable
		server::CCitadelAutoScaledTime m_flDashEndTime; // 0xaf0		
		// MNetworkEnable
		bool m_bIsSpeedBursting; // 0xb08		
	};
};
