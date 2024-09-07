#pragma once
#include "animgraphlib/ScriptInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x1a0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimScriptManager
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		CUtlVector<animgraphlib::ScriptInfo_t> m_scriptInfo; // 0x10		
	};
};
