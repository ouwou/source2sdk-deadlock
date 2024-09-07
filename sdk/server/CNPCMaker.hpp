#pragma once
#include "server/CBaseNPCMaker.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5f8
	// Has VTable
	class CNPCMaker : public server::CBaseNPCMaker
	{
	public:
		CUtlSymbolLarge m_iszNPCSubClass; // 0x5d0		
		CUtlSymbolLarge m_iszSquadName; // 0x5d8		
		CUtlSymbolLarge m_iszHintGroup; // 0x5e0		
		CUtlSymbolLarge m_RelationshipString; // 0x5e8		
		CUtlSymbolLarge m_ChildTargetName; // 0x5f0		
	};
};
