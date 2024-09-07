#pragma once
#include "client/C_DynamicProp.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd68
	// Has VTable
	// 
	// MNetworkVarNames "CUtlString m_strDefaultSkin"
	// MNetworkVarNames "CUtlString m_strFriendlySkin"
	// MNetworkVarNames "CUtlString m_strEnemySkin"
	// MNetworkVarNames "bool m_bIsWorld"
	class C_Citadel_DynamicProp : public client::C_DynamicProp
	{
	private:
		[[maybe_unused]] uint8_t __pad0d30[0x10]; // 0xd30
	public:
		int32_t m_nPlayerTeamEvent; // 0xd40		
	private:
		[[maybe_unused]] uint8_t __pad0d44[0x4]; // 0xd44
	public:
		// MNetworkEnable
		CUtlString m_strDefaultSkin; // 0xd48		
		// MNetworkEnable
		CUtlString m_strFriendlySkin; // 0xd50		
		// MNetworkEnable
		CUtlString m_strEnemySkin; // 0xd58		
		// MNetworkEnable
		bool m_bIsWorld; // 0xd60		
		
		// Datamap fields:
		// CUtlSymbolLarge SetFriendlySkin; // 0x0
		// CUtlSymbolLarge SetEnemySkin; // 0x0
	};
};
