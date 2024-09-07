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
	// Size: 0x5e0
	// Has VTable
	class CTemplateNPCMaker : public server::CBaseNPCMaker
	{
	public:
		CUtlSymbolLarge m_iszWorldName; // 0x5d0		
		CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x5d8		
	};
};
