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
	// Size: 0xe18
	// Has VTable
	// 
	// MNetworkVarNames "CUtlString m_strDefaultSkin"
	// MNetworkVarNames "CUtlString m_strFriendlySkin"
	// MNetworkVarNames "CUtlString m_strEnemySkin"
	// MNetworkVarNames "bool m_bIsWorld"
	class C_Citadel_DynamicProp : public client::C_DynamicProp
	{
	private:
		[[maybe_unused]] uint8_t __pad0de0[0x10]; // 0xde0
	public:
		int32_t m_nPlayerTeamEvent; // 0xdf0		
	private:
		[[maybe_unused]] uint8_t __pad0df4[0x4]; // 0xdf4
	public:
		// MNetworkEnable
		CUtlString m_strDefaultSkin; // 0xdf8		
		// MNetworkEnable
		CUtlString m_strFriendlySkin; // 0xe00		
		// MNetworkEnable
		CUtlString m_strEnemySkin; // 0xe08		
		// MNetworkEnable
		bool m_bIsWorld; // 0xe10		
		
		// Datamap fields:
		// CUtlSymbolLarge SetFriendlySkin; // 0x0
		// CUtlSymbolLarge SetEnemySkin; // 0x0
	};
};
