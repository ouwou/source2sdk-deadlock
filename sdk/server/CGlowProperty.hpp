#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x58
	// Has VTable
	// 
	// MNetworkVarNames "int32 m_iGlowType"
	// MNetworkVarNames "int32 m_iGlowTeam"
	// MNetworkVarNames "int32 m_nGlowRange"
	// MNetworkVarNames "int32 m_nGlowRangeMin"
	// MNetworkVarNames "Color m_glowColorOverride"
	// MNetworkVarNames "bool m_bFlashing"
	// MNetworkVarNames "float m_flGlowTime"
	// MNetworkVarNames "float m_flGlowStartTime"
	class CGlowProperty
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		Vector m_fGlowColor; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x1c]; // 0x14
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnGlowTypeChanged"
		int32_t m_iGlowType; // 0x30		
		// MNetworkEnable
		int32_t m_iGlowTeam; // 0x34		
		// MNetworkEnable
		int32_t m_nGlowRange; // 0x38		
		// MNetworkEnable
		int32_t m_nGlowRangeMin; // 0x3c		
		// MNetworkEnable
		// MNetworkChangeCallback "OnGlowColorChanged"
		Color m_glowColorOverride; // 0x40		
		// MNetworkEnable
		bool m_bFlashing; // 0x44		
	private:
		[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
	public:
		// MNetworkEnable
		float m_flGlowTime; // 0x48		
		// MNetworkEnable
		float m_flGlowStartTime; // 0x4c		
		bool m_bGlowing; // 0x50		
	};
};
