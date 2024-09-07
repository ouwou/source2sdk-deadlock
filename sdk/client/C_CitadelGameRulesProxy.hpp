#pragma once
#include "client/C_GameRulesProxy.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelGameRules;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x560
	// Has VTable
	// 
	// MNetworkVarNames "C_CitadelGameRules * m_pGameRules"
	class C_CitadelGameRulesProxy : public client::C_GameRulesProxy
	{
	public:
		// MNetworkEnable
		// MNetworkTypeAlias "CCitadelGamerules*"
		// MNetworkPriority "32"
		client::C_CitadelGameRules* m_pGameRules; // 0x558		
	};
};
