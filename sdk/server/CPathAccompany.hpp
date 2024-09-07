#pragma once
#include "client/PathAccompanyNode_t.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f8
	// Has VTable
	class CPathAccompany : public server::CBaseEntity
	{
	public:
		CUtlVector<client::PathAccompanyNode_t> m_vecNodes; // 0x4d8		
		
		// Datamap fields:
		// CUtlSymbolLarge pathNodes; // 0x7fffffff
		// CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
	};
};
