#pragma once
#include "client/C_BaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x860
	// Has VTable
	// Is Abstract
	// 
	// MNetworkVarNames "bool m_bEnabled"
	// MNetworkVarNames "string_t m_DialogXMLName"
	// MNetworkVarNames "string_t m_PanelClassName"
	// MNetworkVarNames "string_t m_PanelID"
	class C_BaseClientUIEntity : public client::C_BaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0830[0x8]; // 0x830
	public:
		// MNetworkEnable
		bool m_bEnabled; // 0x838		
	private:
		[[maybe_unused]] uint8_t __pad0839[0x7]; // 0x839
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_DialogXMLName; // 0x840		
		// MNetworkEnable
		CUtlSymbolLarge m_PanelClassName; // 0x848		
		// MNetworkEnable
		CUtlSymbolLarge m_PanelID; // 0x850		
	};
};
