#pragma once
#include "client/C_BaseEntity.hpp"
#include "client/STrooperFOWEntity.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5b0
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_timeLastUpdate"
	// MNetworkVarNames "STrooperFOWEntity m_vecFOWEntities"
	class CCitadelTrooperMinimap : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		// MNetworkPriority "32"
		entity2::GameTime_t m_timeLastUpdate; // 0x558		
	private:
		[[maybe_unused]] uint8_t __pad055c[0x4]; // 0x55c
	public:
		// MNetworkEnable
		// MNetworkPriority "32"
		C_UtlVectorEmbeddedNetworkVar<client::STrooperFOWEntity> m_vecFOWEntities; // 0x560		
	};
};
