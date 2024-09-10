#pragma once
#include "client/CCitadelPlayerPawnBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf30
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkExcludeByName "m_baseLayer.m_hSequence"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkExcludeByName "m_flAnimTime"
	// MNetworkExcludeByUserGroup "m_flCycle"
	// MNetworkExcludeByName "m_flEncodedController"
	// MNetworkExcludeByName "m_flPoseParameter"
	// MNetworkVarTypeOverride "CCitadelPlayer_ObserverServices m_pObserverServices"
	// MNetworkIncludeByName "m_pObserverServices"
	// MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
	// MNetworkIncludeByName "m_pCameraServices"
	// MNetworkVarTypeOverride "CCitadelObserver_MovementServices m_pMovementServices"
	// MNetworkIncludeByName "m_pMovementServices"
	class C_CitadelObserverPawn : public client::CCitadelPlayerPawnBase
	{
	public:
		// Datamap fields:
		// CCitadelPlayer_ObserverServices m_pObserverServices; // 0xd78
		// CCitadelPlayer_CameraServices m_pCameraServices; // 0xd98
		// CCitadelObserver_MovementServices m_pMovementServices; // 0xda0
	};
};
