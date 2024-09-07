#pragma once
#include "client/CInButtonState.hpp"
#include "client/CPlayerPawnComponent.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1d8
	// Has VTable
	// 
	// MNetworkVarNames "ButtonBitMask_t m_nToggleButtonDownMask"
	// MNetworkVarNames "float32 m_flMaxspeed"
	// MNetworkVarNames "float32 m_arrForceSubtickMoveWhen"
	class CPlayer_MovementServices : public client::CPlayerPawnComponent
	{
	public:
		int32_t m_nImpulse; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
	public:
		client::CInButtonState m_nButtons; // 0x48		
		uint64_t m_nQueuedButtonDownMask; // 0x68		
		uint64_t m_nQueuedButtonChangeMask; // 0x70		
		uint64_t m_nButtonDoublePressed; // 0x78		
		uint32_t m_pButtonPressedCmdNumber[64]; // 0x80		
		uint32_t m_nLastCommandNumberProcessed; // 0x180		
	private:
		[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		uint64_t m_nToggleButtonDownMask; // 0x188		
	private:
		[[maybe_unused]] uint8_t __pad0190[0x8]; // 0x190
	public:
		// MNetworkEnable
		// MNetworkBitCount "12"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "2048.000000"
		// MNetworkEncodeFlags "1"
		float m_flMaxspeed; // 0x198		
		// MNetworkEnable
		float m_arrForceSubtickMoveWhen[4]; // 0x19c		
		float m_flForwardMove; // 0x1ac		
		float m_flLeftMove; // 0x1b0		
		float m_flUpMove; // 0x1b4		
		Vector m_vecLastMovementImpulses; // 0x1b8		
		QAngle m_vecOldViewAngles; // 0x1c4		
		
		// Datamap fields:
		// void m_pButtonPressedCmdNumber; // 0x80
	};
};
