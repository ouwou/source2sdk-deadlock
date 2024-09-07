#pragma once
#include "client/Class_T.hpp"
#include "client/EMinimapHeight.hpp"
#include "entity2/GameTick_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	// 
	// MNetworkVarNames "CEntityIndex m_nEntIndex"
	// MNetworkVarNames "int m_nTeam"
	// MNetworkVarNames "Class_T m_eClass"
	// MNetworkVarNames "int m_iLane"
	// MNetworkVarNames "EMinimapHeight m_eHeight"
	// MNetworkVarNames "bool m_bVisibleOnMap"
	// MNetworkVarNames "bool m_bBackdoorProtectionActive"
	// MNetworkVarNames "GameTick_t m_nTickHidden"
	// MNetworkVarNames "uint8 m_nHealthPercent"
	// MNetworkVarNames "uint8 m_nPositionX"
	// MNetworkVarNames "uint8 m_nPositionY"
	class STeamFOWEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
	public:
		// MNetworkEnable
		CEntityIndex m_nEntIndex; // 0x30		
		// MNetworkEnable
		int32_t m_nTeam; // 0x34		
		// MNetworkEnable
		client::Class_T m_eClass; // 0x38		
		// MNetworkEnable
		int32_t m_iLane; // 0x3c		
		// MNetworkEnable
		client::EMinimapHeight m_eHeight; // 0x40		
		// MNetworkEnable
		bool m_bVisibleOnMap; // 0x41		
		// MNetworkEnable
		bool m_bBackdoorProtectionActive; // 0x42		
	private:
		[[maybe_unused]] uint8_t __pad0043[0x1]; // 0x43
	public:
		// MNetworkEnable
		entity2::GameTick_t m_nTickHidden; // 0x44		
		// MNetworkEnable
		uint8_t m_nHealthPercent; // 0x48		
		// MNetworkEnable
		// MNetworkPriority "32"
		uint8_t m_nPositionX; // 0x49		
		// MNetworkEnable
		// MNetworkPriority "32"
		uint8_t m_nPositionY; // 0x4a		
	};
};
