#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e8
	// Has VTable
	class CInfoGameEventProxy : public server::CPointEntity
	{
	public:
		CUtlSymbolLarge m_iszEventName; // 0x4d8		
		float m_flRange; // 0x4e0		
		
		// Datamap fields:
		// CUtlSymbolLarge InputGenerateGameEvent; // 0x0
	};
};
