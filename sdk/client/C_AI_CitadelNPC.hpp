#pragma once
#include "client/CCitadelAbilityComponent.hpp"
#include "client/C_AI_BaseNPC.hpp"
#include "client/WeakPoint_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x13e0
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkIncludeByName "m_iHealth"
	// MNetworkIncludeByName "m_iTeam"
	// MNetworkIncludeByName "m_vecViewOffset"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkExcludeByName "m_flAnimTime"
	// MNetworkExcludeByUserGroup "m_flCycle"
	// MNetworkExcludeByName "m_flEncodedController"
	// MNetworkExcludeByName "m_flPoseParameter"
	// MNetworkOverride "m_lifeState"
	// MNetworkVarNames "bool m_bBeamActive"
	// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
	// MNetworkVarNames "bool m_bMinion"
	// MNetworkVarNames "EHANDLE m_hLookTarget"
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	class C_AI_CitadelNPC : public client::C_AI_BaseNPC
	{
	private:
		[[maybe_unused]] uint8_t __pad0cb8[0x1c]; // 0xcb8
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnEyeBeamActiveChanged"
		bool m_bBeamActive; // 0xcd4		
	private:
		[[maybe_unused]] uint8_t __pad0cd5[0x3]; // 0xcd5
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		// MNetworkChangeCallback "OnEyeBeamTargetChanged"
		Vector m_vEyeBeamTarget; // 0xcd8		
	private:
		[[maybe_unused]] uint8_t __pad0ce4[0x4b4]; // 0xce4
	public:
		int32_t m_nPlayerTeamEvent; // 0x1198		
	private:
		[[maybe_unused]] uint8_t __pad119c[0x4c]; // 0x119c
	public:
		// MNetworkEnable
		C_UtlVectorEmbeddedNetworkVar<client::WeakPoint_t> m_vecWeakPoints; // 0x11e8		
		// MNetworkEnable
		bool m_bMinion; // 0x1238		
	private:
		[[maybe_unused]] uint8_t __pad1239[0x3]; // 0x1239
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hLookTarget; // 0x123c		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1240		
	};
};
