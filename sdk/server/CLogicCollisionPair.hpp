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
	// Size: 0x4f0
	// Has VTable
	class CLogicCollisionPair : public server::CLogicalEntity
	{
	public:
		CUtlSymbolLarge m_nameAttach1; // 0x4d8		
		CUtlSymbolLarge m_nameAttach2; // 0x4e0		
		bool m_supportMultipleEntitiesWithSameName; // 0x4e8		
		bool m_disabled; // 0x4e9		
		bool m_succeeded; // 0x4ea		
		
		// Datamap fields:
		// void InputDisableCollisions; // 0x0
		// CUtlSymbolLarge InputDisableCollisionsWith; // 0x0
		// void InputEnableCollisions; // 0x0
	};
};
