#pragma once
#include "server/CGameRulesProxy.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelGameRules;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e0
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelGameRules * m_pGameRules"
	class CCitadelGameRulesProxy : public server::CGameRulesProxy
	{
	public:
		// MNetworkEnable
		// MNetworkTypeAlias "CCitadelGamerules*"
		// MNetworkPriority "32"
		server::CCitadelGameRules* m_pGameRules; // 0x4d8		
	};
};
