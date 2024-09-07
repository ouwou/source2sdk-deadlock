#pragma once
#include "entity2/GameTime_t.hpp"
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
	// Size: 0xae8
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
	class CCitadel_Ability_LifeDrain : public server::CCitadelBaseAbility
	{
	public:
		CHandle<server::CBaseEntity> m_hTarget; // 0xad8		
		// MNetworkEnable
		entity2::GameTime_t m_tDrainLifeStopTime; // 0xadc		
	};
};
