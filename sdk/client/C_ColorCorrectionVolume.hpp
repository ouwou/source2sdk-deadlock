#pragma once
#include "client/C_BaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xa60
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bEnabled"
	// MNetworkVarNames "float m_MaxWeight"
	// MNetworkVarNames "float m_FadeDuration"
	// MNetworkVarNames "float m_Weight"
	// MNetworkVarNames "char m_lookupFilename"
	class C_ColorCorrectionVolume : public client::C_BaseTrigger
	{
	public:
		float m_LastEnterWeight; // 0x838		
		float m_LastEnterTime; // 0x83c		
		float m_LastExitWeight; // 0x840		
		float m_LastExitTime; // 0x844		
		// MNetworkEnable
		bool m_bEnabled; // 0x848		
	private:
		[[maybe_unused]] uint8_t __pad0849[0x3]; // 0x849
	public:
		// MNetworkEnable
		float m_MaxWeight; // 0x84c		
		// MNetworkEnable
		float m_FadeDuration; // 0x850		
		// MNetworkEnable
		float m_Weight; // 0x854		
		// MNetworkEnable
		char m_lookupFilename[512]; // 0x858		
	};
};
