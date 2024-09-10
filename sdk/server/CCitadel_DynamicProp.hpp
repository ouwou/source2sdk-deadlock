#pragma once
#include "server/CDynamicProp.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc80
	// Has VTable
	// 
	// MNetworkVarNames "CUtlString m_strDefaultSkin"
	// MNetworkVarNames "CUtlString m_strFriendlySkin"
	// MNetworkVarNames "CUtlString m_strEnemySkin"
	// MNetworkVarNames "bool m_bIsWorld"
	class CCitadel_DynamicProp : public server::CDynamicProp
	{
	private:
		[[maybe_unused]] uint8_t __pad0c50[0x10]; // 0xc50
	public:
		// MNetworkEnable
		CUtlString m_strDefaultSkin; // 0xc60		
		// MNetworkEnable
		CUtlString m_strFriendlySkin; // 0xc68		
		// MNetworkEnable
		CUtlString m_strEnemySkin; // 0xc70		
		// MNetworkEnable
		bool m_bIsWorld; // 0xc78		
		
		// Datamap fields:
		// CUtlSymbolLarge SetFriendlySkin; // 0x0
		// CUtlSymbolLarge SetEnemySkin; // 0x0
	};
};
