#pragma once
#include "client/hudtextparms_t.hpp"
#include "server/CRulePointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x798
	// Has VTable
	class CGameText : public server::CRulePointEntity
	{
	public:
		CUtlSymbolLarge m_iszMessage; // 0x778		
		client::hudtextparms_t m_textParms; // 0x780		
		
		// Datamap fields:
		// void InputDisplay; // 0x0
		// CUtlSymbolLarge InputSetText; // 0x0
		// Color color; // 0x7fffffff
		// Color color2; // 0x7fffffff
	};
};
