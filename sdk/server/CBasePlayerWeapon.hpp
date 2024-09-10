#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTick_t.hpp"
#include "server/CBaseAnimGraph.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9e8
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
	class CBasePlayerWeapon : public server::CBaseAnimGraph
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		entity2::GameTick_t m_nNextPrimaryAttackTick; // 0x9a0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		float m_flNextPrimaryAttackTickRatio; // 0x9a4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		entity2::GameTick_t m_nNextSecondaryAttackTick; // 0x9a8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		float m_flNextSecondaryAttackTickRatio; // 0x9ac		
		// MNetworkEnable
		// MNetworkSerializer "minusone"
		// MNetworkPriority "32"
		int32_t m_iClip1; // 0x9b0		
		// MNetworkEnable
		// MNetworkSerializer "minusone"
		// MNetworkUserGroup "LocalWeaponExclusive"
		int32_t m_iClip2; // 0x9b4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		int32_t m_pReserveAmmo[2]; // 0x9b8		
		entity2::CEntityIOOutput m_OnPlayerUse; // 0x9c0		
		
		// Datamap fields:
		// int32_t InputSetClipPrimary; // 0x0
		// int32_t InputSetClipSecondary; // 0x0
	};
};
