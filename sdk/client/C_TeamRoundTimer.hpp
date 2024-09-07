#pragma once
#include "client/C_BaseEntity.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5a0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bTimerPaused"
	// MNetworkVarNames "float m_flTimeRemaining"
	// MNetworkVarNames "GameTime_t m_flTimerEndTime"
	// MNetworkVarNames "bool m_bIsDisabled"
	// MNetworkVarNames "bool m_bShowInHUD"
	// MNetworkVarNames "int m_nTimerLength"
	// MNetworkVarNames "int m_nTimerInitialLength"
	// MNetworkVarNames "int m_nTimerMaxLength"
	// MNetworkVarNames "bool m_bAutoCountdown"
	// MNetworkVarNames "int m_nSetupTimeLength"
	// MNetworkVarNames "int m_nState"
	// MNetworkVarNames "bool m_bStartPaused"
	// MNetworkVarNames "bool m_bInCaptureWatchState"
	// MNetworkVarNames "float m_flTotalTime"
	// MNetworkVarNames "bool m_bStopWatchTimer"
	class C_TeamRoundTimer : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnTimerPaused"
		bool m_bTimerPaused; // 0x558		
	private:
		[[maybe_unused]] uint8_t __pad0559[0x3]; // 0x559
	public:
		// MNetworkEnable
		float m_flTimeRemaining; // 0x55c		
		// MNetworkEnable
		entity2::GameTime_t m_flTimerEndTime; // 0x560		
		// MNetworkEnable
		bool m_bIsDisabled; // 0x564		
		// MNetworkEnable
		bool m_bShowInHUD; // 0x565		
	private:
		[[maybe_unused]] uint8_t __pad0566[0x2]; // 0x566
	public:
		// MNetworkEnable
		int32_t m_nTimerLength; // 0x568		
		// MNetworkEnable
		int32_t m_nTimerInitialLength; // 0x56c		
		// MNetworkEnable
		int32_t m_nTimerMaxLength; // 0x570		
		// MNetworkEnable
		bool m_bAutoCountdown; // 0x574		
	private:
		[[maybe_unused]] uint8_t __pad0575[0x3]; // 0x575
	public:
		// MNetworkEnable
		int32_t m_nSetupTimeLength; // 0x578		
		// MNetworkEnable
		int32_t m_nState; // 0x57c		
		// MNetworkEnable
		bool m_bStartPaused; // 0x580		
		// MNetworkEnable
		bool m_bInCaptureWatchState; // 0x581		
	private:
		[[maybe_unused]] uint8_t __pad0582[0x2]; // 0x582
	public:
		// MNetworkEnable
		float m_flTotalTime; // 0x584		
		// MNetworkEnable
		bool m_bStopWatchTimer; // 0x588		
		bool m_bFireFinished; // 0x589		
		bool m_bFire5MinRemain; // 0x58a		
		bool m_bFire4MinRemain; // 0x58b		
		bool m_bFire3MinRemain; // 0x58c		
		bool m_bFire2MinRemain; // 0x58d		
		bool m_bFire1MinRemain; // 0x58e		
		bool m_bFire30SecRemain; // 0x58f		
		bool m_bFire10SecRemain; // 0x590		
		bool m_bFire5SecRemain; // 0x591		
		bool m_bFire4SecRemain; // 0x592		
		bool m_bFire3SecRemain; // 0x593		
		bool m_bFire2SecRemain; // 0x594		
		bool m_bFire1SecRemain; // 0x595		
	private:
		[[maybe_unused]] uint8_t __pad0596[0x2]; // 0x596
	public:
		int32_t m_nOldTimerLength; // 0x598		
		int32_t m_nOldTimerState; // 0x59c		
	};
};
