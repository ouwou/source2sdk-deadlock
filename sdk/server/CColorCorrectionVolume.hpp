#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb60
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bEnabled"
	// MNetworkVarNames "float32 m_MaxWeight"
	// MNetworkVarNames "float32 m_FadeDuration"
	// MNetworkVarNames "float32 m_Weight"
	// MNetworkVarNames "char m_lookupFilename"
	class CColorCorrectionVolume : public server::CBaseTrigger
	{
	public:
		// MNetworkEnable
		bool m_bEnabled; // 0x938		
	private:
		[[maybe_unused]] uint8_t __pad0939[0x3]; // 0x939
	public:
		// MNetworkEnable
		float m_MaxWeight; // 0x93c		
		// MNetworkEnable
		float m_FadeDuration; // 0x940		
		bool m_bStartDisabled; // 0x944		
	private:
		[[maybe_unused]] uint8_t __pad0945[0x3]; // 0x945
	public:
		// MNetworkEnable
		float m_Weight; // 0x948		
		// MNetworkEnable
		char m_lookupFilename[512]; // 0x94c		
		float m_LastEnterWeight; // 0xb4c		
		entity2::GameTime_t m_LastEnterTime; // 0xb50		
		float m_LastExitWeight; // 0xb54		
		entity2::GameTime_t m_LastExitTime; // 0xb58		
		
		// Datamap fields:
		// void CColorCorrectionVolumeThinkFunc; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
