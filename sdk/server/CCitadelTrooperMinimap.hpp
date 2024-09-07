#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CBaseEntity.hpp"
#include "server/STrooperFOWEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x530
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_timeLastUpdate"
	// MNetworkVarNames "STrooperFOWEntity m_vecFOWEntities"
	class CCitadelTrooperMinimap : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		// MNetworkPriority "32"
		entity2::GameTime_t m_timeLastUpdate; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
	public:
		// MNetworkEnable
		// MNetworkPriority "32"
		CUtlVectorEmbeddedNetworkVar<server::STrooperFOWEntity> m_vecFOWEntities; // 0x4e0		
	};
};
