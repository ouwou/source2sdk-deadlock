#pragma once
#include "server/CLogicalEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e0
	// Has VTable
	class CLogicGameEvent : public server::CLogicalEntity
	{
	public:
		CUtlSymbolLarge m_iszEventName; // 0x4d8		
		
		// Datamap fields:
		// void InputFireEvent; // 0x0
	};
};
