#pragma once
#include "client/C_DynamicProp.hpp"
#include "client/DoorState_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe20
	// Has VTable
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
	// MNetworkVarNames "CHandle< C_BasePropDoor> m_hMaster"
	class C_BasePropDoor : public client::C_DynamicProp
	{
	private:
		[[maybe_unused]] uint8_t __pad0de0[0x10]; // 0xde0
	public:
		// MNetworkEnable
		client::DoorState_t m_eDoorState; // 0xdf0		
		bool m_modelChanged; // 0xdf4		
		// MNetworkEnable
		bool m_bLocked; // 0xdf5		
	private:
		[[maybe_unused]] uint8_t __pad0df6[0x2]; // 0xdf6
	public:
		// MNetworkEnable
		Vector m_closedPosition; // 0xdf8		
		// MNetworkEnable
		QAngle m_closedAngles; // 0xe04		
		// MNetworkEnable
		CHandle<client::C_BasePropDoor> m_hMaster; // 0xe10		
		Vector m_vWhereToSetLightingOrigin; // 0xe14		
	};
};
