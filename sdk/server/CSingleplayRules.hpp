#pragma once
#include "server/CGameRules.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc8
	// Has VTable
	class CSingleplayRules : public server::CGameRules
	{
	public:
		bool m_bSinglePlayerGameEnding; // 0xc0		
	};
};
