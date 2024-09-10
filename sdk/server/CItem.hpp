#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseAnimGraph.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa78
	// Has VTable
	class CItem : public server::CBaseAnimGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad09a0[0x8]; // 0x9a0
	public:
		entity2::CEntityIOOutput m_OnPlayerTouch; // 0x9a8		
		entity2::CEntityIOOutput m_OnPlayerPickup; // 0x9d0		
		bool m_bActivateWhenAtRest; // 0x9f8		
	private:
		[[maybe_unused]] uint8_t __pad09f9[0x7]; // 0x9f9
	public:
		entity2::CEntityIOOutput m_OnCacheInteraction; // 0xa00		
		entity2::CEntityIOOutput m_OnGlovePulled; // 0xa28		
		Vector m_vOriginalSpawnOrigin; // 0xa50		
		QAngle m_vOriginalSpawnAngles; // 0xa5c		
		bool m_bPhysStartAsleep; // 0xa68		
		
		// Datamap fields:
		// void CItemItemTouch; // 0x0
		// void CItemMaterialize; // 0x0
		// void CItemComeToRest; // 0x0
	};
};
