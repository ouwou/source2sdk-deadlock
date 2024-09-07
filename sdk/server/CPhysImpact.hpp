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
	class CPhysImpact : public server::CPointEntity
	{
	public:
		float m_damage; // 0x4d8		
		float m_distance; // 0x4dc		
		CUtlSymbolLarge m_directionEntityName; // 0x4e0		
		
		// Datamap fields:
		// void CPhysImpactPointAtEntity; // 0x0
		// void InputImpact; // 0x0
	};
};
