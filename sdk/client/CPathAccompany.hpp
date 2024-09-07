#pragma once
#include "client/C_BaseEntity.hpp"
#include "client/PathAccompanyNode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x578
	// Has VTable
	class CPathAccompany : public client::C_BaseEntity
	{
	public:
		CUtlVector<client::PathAccompanyNode_t> m_vecNodes; // 0x558		
		
		// Datamap fields:
		// CUtlSymbolLarge pathNodes; // 0x7fffffff
		// CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
	};
};
