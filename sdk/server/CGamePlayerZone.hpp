#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CRuleBrushEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x810
	// Has VTable
	class CGamePlayerZone : public server::CRuleBrushEntity
	{
	public:
		entity2::CEntityIOOutput m_OnPlayerInZone; // 0x770		
		entity2::CEntityIOOutput m_OnPlayerOutZone; // 0x798		
		CEntityOutputTemplate<int32_t> m_PlayersInCount; // 0x7c0		
		CEntityOutputTemplate<int32_t> m_PlayersOutCount; // 0x7e8		
		
		// Datamap fields:
		// void InputCountPlayersInZone; // 0x0
	};
};
