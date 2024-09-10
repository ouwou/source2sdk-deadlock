#pragma once
#include "client/C_BreakableProp.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xcd0
	// Has VTable
	// 
	// MNetworkExcludeByName "m_flAnimTime"
	// MNetworkExcludeByName "m_flexWeight"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkExcludeByUserGroup "m_flPoseParameter"
	// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
	// MNetworkExcludeByUserGroup "overlay_vars"
	// MNetworkIncludeByName "m_spawnflags"
	// MNetworkVarNames "bool m_bAwake"
	class C_PhysicsProp : public client::C_BreakableProp
	{
	public:
		// MNetworkEnable
		bool m_bAwake; // 0xcc8		
	};
};
