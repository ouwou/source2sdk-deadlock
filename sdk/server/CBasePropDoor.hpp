#pragma once
#include "client/DoorState_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "server/CDynamicProp.hpp"
#include "server/locksound_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xee0
	// Has VTable
	// Is Abstract
	// 
	// MNetworkExcludeByName "m_flAnimTime"
	// MNetworkExcludeByName "m_flexWeight"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkExcludeByUserGroup "m_flPoseParameter"
	// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
	// MNetworkExcludeByUserGroup "overlay_vars"
	// MNetworkIncludeByName "m_spawnflags"
	// MNetworkVarNames "DoorState_t m_eDoorState"
	// MNetworkVarNames "bool m_bLocked"
	// MNetworkVarNames "Vector m_closedPosition"
	// MNetworkVarNames "QAngle m_closedAngles"
	// MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
	class CBasePropDoor : public server::CDynamicProp
	{
	private:
		[[maybe_unused]] uint8_t __pad0c50[0x10]; // 0xc50
	public:
		float m_flAutoReturnDelay; // 0xc60		
	private:
		[[maybe_unused]] uint8_t __pad0c64[0x4]; // 0xc64
	public:
		CUtlVector<CHandle<server::CBasePropDoor>> m_hDoorList; // 0xc68		
		int32_t m_nHardwareType; // 0xc80		
		bool m_bNeedsHardware; // 0xc84		
	private:
		[[maybe_unused]] uint8_t __pad0c85[0x3]; // 0xc85
	public:
		// MNetworkEnable
		client::DoorState_t m_eDoorState; // 0xc88		
		// MNetworkEnable
		bool m_bLocked; // 0xc8c		
	private:
		[[maybe_unused]] uint8_t __pad0c8d[0x3]; // 0xc8d
	public:
		// MNetworkEnable
		Vector m_closedPosition; // 0xc90		
		// MNetworkEnable
		QAngle m_closedAngles; // 0xc9c		
		CHandle<server::CBaseEntity> m_hBlocker; // 0xca8		
		bool m_bFirstBlocked; // 0xcac		
	private:
		[[maybe_unused]] uint8_t __pad0cad[0x3]; // 0xcad
	public:
		server::locksound_t m_ls; // 0xcb0		
		bool m_bForceClosed; // 0xcd0		
	private:
		[[maybe_unused]] uint8_t __pad0cd1[0x3]; // 0xcd1
	public:
		Vector m_vecLatchWorldPosition; // 0xcd4		
		CHandle<server::CBaseEntity> m_hActivator; // 0xce0		
	private:
		[[maybe_unused]] uint8_t __pad0ce4[0xc]; // 0xce4
	public:
		CUtlSymbolLarge m_SoundMoving; // 0xcf0		
		CUtlSymbolLarge m_SoundOpen; // 0xcf8		
		CUtlSymbolLarge m_SoundClose; // 0xd00		
		CUtlSymbolLarge m_SoundLock; // 0xd08		
		CUtlSymbolLarge m_SoundUnlock; // 0xd10		
		CUtlSymbolLarge m_SoundLatch; // 0xd18		
		CUtlSymbolLarge m_SoundPound; // 0xd20		
		CUtlSymbolLarge m_SoundJiggle; // 0xd28		
		CUtlSymbolLarge m_SoundLockedAnim; // 0xd30		
		int32_t m_numCloseAttempts; // 0xd38		
		CUtlStringToken m_nPhysicsMaterial; // 0xd3c		
		CUtlSymbolLarge m_SlaveName; // 0xd40		
		// MNetworkEnable
		CHandle<server::CBasePropDoor> m_hMaster; // 0xd48		
	private:
		[[maybe_unused]] uint8_t __pad0d4c[0x4]; // 0xd4c
	public:
		entity2::CEntityIOOutput m_OnBlockedClosing; // 0xd50		
		entity2::CEntityIOOutput m_OnBlockedOpening; // 0xd78		
		entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xda0		
		entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xdc8		
		entity2::CEntityIOOutput m_OnFullyClosed; // 0xdf0		
		entity2::CEntityIOOutput m_OnFullyOpen; // 0xe18		
		entity2::CEntityIOOutput m_OnClose; // 0xe40		
		entity2::CEntityIOOutput m_OnOpen; // 0xe68		
		entity2::CEntityIOOutput m_OnLockedUse; // 0xe90		
		entity2::CEntityIOOutput m_OnAjarOpen; // 0xeb8		
		
		// Datamap fields:
		// void m_hSoundMoving; // 0xce4
		//  m_ls.sLockedSound; // 0xcb8
		//  m_ls.sUnlockedSound; // 0xcc0
		// void InputOpen; // 0x0
		// CUtlSymbolLarge InputOpenAwayFrom; // 0x0
		// float InputOpenAwayFromActivator; // 0x0
		// void InputClose; // 0x0
		// void InputToggle; // 0x0
		// void InputLock; // 0x0
		// void InputUnlock; // 0x0
		// void InputPlayerOpen; // 0x0
		// void InputPlayerClose; // 0x0
		// void CBasePropDoorDoorOpenMoveDone; // 0x0
		// void CBasePropDoorDoorCloseMoveDone; // 0x0
		// void CBasePropDoorDoorAutoCloseThink; // 0x0
		// void CBasePropDoorDisableAreaPortalThink; // 0x0
	};
};
