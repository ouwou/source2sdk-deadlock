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
	// Size: 0xeb8
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
		[[maybe_unused]] uint8_t __pad0c28[0x10]; // 0xc28
	public:
		float m_flAutoReturnDelay; // 0xc38		
	private:
		[[maybe_unused]] uint8_t __pad0c3c[0x4]; // 0xc3c
	public:
		CUtlVector<CHandle<server::CBasePropDoor>> m_hDoorList; // 0xc40		
		int32_t m_nHardwareType; // 0xc58		
		bool m_bNeedsHardware; // 0xc5c		
	private:
		[[maybe_unused]] uint8_t __pad0c5d[0x3]; // 0xc5d
	public:
		// MNetworkEnable
		client::DoorState_t m_eDoorState; // 0xc60		
		// MNetworkEnable
		bool m_bLocked; // 0xc64		
	private:
		[[maybe_unused]] uint8_t __pad0c65[0x3]; // 0xc65
	public:
		// MNetworkEnable
		Vector m_closedPosition; // 0xc68		
		// MNetworkEnable
		QAngle m_closedAngles; // 0xc74		
		CHandle<server::CBaseEntity> m_hBlocker; // 0xc80		
		bool m_bFirstBlocked; // 0xc84		
	private:
		[[maybe_unused]] uint8_t __pad0c85[0x3]; // 0xc85
	public:
		server::locksound_t m_ls; // 0xc88		
		bool m_bForceClosed; // 0xca8		
	private:
		[[maybe_unused]] uint8_t __pad0ca9[0x3]; // 0xca9
	public:
		Vector m_vecLatchWorldPosition; // 0xcac		
		CHandle<server::CBaseEntity> m_hActivator; // 0xcb8		
	private:
		[[maybe_unused]] uint8_t __pad0cbc[0xc]; // 0xcbc
	public:
		CUtlSymbolLarge m_SoundMoving; // 0xcc8		
		CUtlSymbolLarge m_SoundOpen; // 0xcd0		
		CUtlSymbolLarge m_SoundClose; // 0xcd8		
		CUtlSymbolLarge m_SoundLock; // 0xce0		
		CUtlSymbolLarge m_SoundUnlock; // 0xce8		
		CUtlSymbolLarge m_SoundLatch; // 0xcf0		
		CUtlSymbolLarge m_SoundPound; // 0xcf8		
		CUtlSymbolLarge m_SoundJiggle; // 0xd00		
		CUtlSymbolLarge m_SoundLockedAnim; // 0xd08		
		int32_t m_numCloseAttempts; // 0xd10		
		CUtlStringToken m_nPhysicsMaterial; // 0xd14		
		CUtlSymbolLarge m_SlaveName; // 0xd18		
		// MNetworkEnable
		CHandle<server::CBasePropDoor> m_hMaster; // 0xd20		
	private:
		[[maybe_unused]] uint8_t __pad0d24[0x4]; // 0xd24
	public:
		entity2::CEntityIOOutput m_OnBlockedClosing; // 0xd28		
		entity2::CEntityIOOutput m_OnBlockedOpening; // 0xd50		
		entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xd78		
		entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xda0		
		entity2::CEntityIOOutput m_OnFullyClosed; // 0xdc8		
		entity2::CEntityIOOutput m_OnFullyOpen; // 0xdf0		
		entity2::CEntityIOOutput m_OnClose; // 0xe18		
		entity2::CEntityIOOutput m_OnOpen; // 0xe40		
		entity2::CEntityIOOutput m_OnLockedUse; // 0xe68		
		entity2::CEntityIOOutput m_OnAjarOpen; // 0xe90		
		
		// Datamap fields:
		// void m_hSoundMoving; // 0xcbc
		//  m_ls.sLockedSound; // 0xc90
		//  m_ls.sUnlockedSound; // 0xc98
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
