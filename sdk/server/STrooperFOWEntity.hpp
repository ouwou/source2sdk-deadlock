#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MNetworkVarNames "CEntityIndex m_nEntIndex"
	// MNetworkVarNames "int8 m_nTeam"
	// MNetworkVarNames "uint16 m_nPositionXY"
	class STrooperFOWEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
	public:
		// MNetworkEnable
		CEntityIndex m_nEntIndex; // 0x30		
		// MNetworkEnable
		int8_t m_nTeam; // 0x34		
	private:
		[[maybe_unused]] uint8_t __pad0035[0x1]; // 0x35
	public:
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkChangeCallback "OnFieldXYChanged"
		uint16_t m_nPositionXY; // 0x36		
	};
};
