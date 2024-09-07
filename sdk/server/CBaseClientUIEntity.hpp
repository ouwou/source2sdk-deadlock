#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x918
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bEnabled"
	// MNetworkVarNames "string_t m_DialogXMLName"
	// MNetworkVarNames "string_t m_PanelClassName"
	// MNetworkVarNames "string_t m_PanelID"
	class CBaseClientUIEntity : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		bool m_bEnabled; // 0x768		
	private:
		[[maybe_unused]] uint8_t __pad0769[0x7]; // 0x769
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_DialogXMLName; // 0x770		
		// MNetworkEnable
		CUtlSymbolLarge m_PanelClassName; // 0x778		
		// MNetworkEnable
		CUtlSymbolLarge m_PanelID; // 0x780		
		entity2::CEntityIOOutput m_CustomOutput0; // 0x788		
		entity2::CEntityIOOutput m_CustomOutput1; // 0x7b0		
		entity2::CEntityIOOutput m_CustomOutput2; // 0x7d8		
		entity2::CEntityIOOutput m_CustomOutput3; // 0x800		
		entity2::CEntityIOOutput m_CustomOutput4; // 0x828		
		entity2::CEntityIOOutput m_CustomOutput5; // 0x850		
		entity2::CEntityIOOutput m_CustomOutput6; // 0x878		
		entity2::CEntityIOOutput m_CustomOutput7; // 0x8a0		
		entity2::CEntityIOOutput m_CustomOutput8; // 0x8c8		
		entity2::CEntityIOOutput m_CustomOutput9; // 0x8f0		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
