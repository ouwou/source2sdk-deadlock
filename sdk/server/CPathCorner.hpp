#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x508
	// Has VTable
	class CPathCorner : public server::CPointEntity
	{
	public:
		float m_flWait; // 0x4d8		
		float m_flRadius; // 0x4dc		
		entity2::CEntityIOOutput m_OnPass; // 0x4e0		
		
		// Datamap fields:
		// CUtlSymbolLarge InputSetNextPathCorner; // 0x0
		// void InputInPass; // 0x0
	};
};
