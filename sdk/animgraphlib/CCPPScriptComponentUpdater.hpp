#pragma once
#include "animgraphlib/CAnimComponentUpdater.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCPPScriptComponentUpdater : public animgraphlib::CAnimComponentUpdater
	{
	public:
		// MPropertyFriendlyName "Scripts"
		CUtlVector<CGlobalSymbol> m_scriptsToRun; // 0x30		
	};
};
