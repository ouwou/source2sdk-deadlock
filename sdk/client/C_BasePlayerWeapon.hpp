#pragma once
#include "client/CBaseAnimGraph.hpp"
#include "entity2/GameTick_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb78
	// Has VTable
	// 
	// MNetworkExcludeByName "m_flexWeight"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkIncludeByName "m_nNextThinkTick"
	// MNetworkExcludeByUserGroup "m_flPoseParameter"
	// MNetworkExcludeByUserGroup "m_flCycle"
	// MNetworkExcludeByUserGroup "overlay_vars"
	// MNetworkUserGroupProxy "CBasePlayerWeapon"
	// MNetworkVarNames "GameTick_t m_nNextPrimaryAttackTick"
	// MNetworkVarNames "float32 m_flNextPrimaryAttackTickRatio"
	// MNetworkVarNames "GameTick_t m_nNextSecondaryAttackTick"
	// MNetworkVarNames "float32 m_flNextSecondaryAttackTickRatio"
	// MNetworkVarNames "int32 m_iClip1"
	// MNetworkVarNames "int32 m_iClip2"
	// MNetworkVarNames "int m_pReserveAmmo"
	class C_BasePlayerWeapon : public client::CBaseAnimGraph
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		entity2::GameTick_t m_nNextPrimaryAttackTick; // 0xb40		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		float m_flNextPrimaryAttackTickRatio; // 0xb44		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		entity2::GameTick_t m_nNextSecondaryAttackTick; // 0xb48		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		float m_flNextSecondaryAttackTickRatio; // 0xb4c		
		// MNetworkEnable
		// MNetworkSerializer "minusone"
		// MNetworkPriority "32"
		int32_t m_iClip1; // 0xb50		
		// MNetworkEnable
		// MNetworkSerializer "minusone"
		// MNetworkUserGroup "LocalWeaponExclusive"
		int32_t m_iClip2; // 0xb54		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		int32_t m_pReserveAmmo[2]; // 0xb58		
	};
};
