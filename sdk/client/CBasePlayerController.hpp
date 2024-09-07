#pragma once
#include "client/C_BaseEntity.hpp"
#include "client/C_CommandContext.hpp"
#include "client/PlayerConnectedState.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BasePlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x6f0
	// Has VTable
	// 
	// MNetworkIncludeByName "m_pEntity"
	// MNetworkIncludeByName "m_flSimulationTime"
	// MNetworkIncludeByName "m_flCreateTime"
	// MNetworkIncludeByName "m_iTeamNum"
	// MNetworkIncludeByName "m_nNextThinkTick"
	// MNetworkIncludeByName "m_fFlags"
	// MNetworkUserGroupProxy "CBasePlayerController"
	// MNetworkUserGroupProxy "CBasePlayerController"
	// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
	// MNetworkVarNames "uint32 m_nTickBase"
	// MNetworkVarNames "CHandle< CBasePlayerPawn> m_hPawn"
	// MNetworkVarNames "bool m_bKnownTeamMismatch"
	// MNetworkVarNames "PlayerConnectedState m_iConnected"
	// MNetworkVarNames "char m_iszPlayerName"
	// MNetworkVarNames "uint64 m_steamID"
	// MNetworkVarNames "uint32 m_iDesiredFOV"
	// MNetworkReplayCompatField "m_skeletonInstance\.m_vecOrigin\..*|"
	class CBasePlayerController : public client::C_BaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0558[0x8]; // 0x558
	public:
		int32_t m_nFinalPredictedTick; // 0x560		
	private:
		[[maybe_unused]] uint8_t __pad0564[0x4]; // 0x564
	public:
		client::C_CommandContext m_CommandContext; // 0x568		
		uint64_t m_nInButtonsWhichAreToggles; // 0x600		
		// MNetworkEnable
		// MNetworkPriority "1"
		// MNetworkUserGroup "LocalPlayerExclusive"
		uint32_t m_nTickBase; // 0x608		
		// MNetworkEnable
		// MNetworkChangeCallback "OnPawnChanged"
		CHandle<client::C_BasePlayerPawn> m_hPawn; // 0x60c		
		// MNetworkEnable
		bool m_bKnownTeamMismatch; // 0x610		
	private:
		[[maybe_unused]] uint8_t __pad0611[0x3]; // 0x611
	public:
		CHandle<client::C_BasePlayerPawn> m_hPredictedPawn; // 0x614		
		CSplitScreenSlot m_nSplitScreenSlot; // 0x618		
		CHandle<client::CBasePlayerController> m_hSplitOwner; // 0x61c		
		CUtlVector<CHandle<client::CBasePlayerController>> m_hSplitScreenPlayers; // 0x620		
		bool m_bIsHLTV; // 0x638		
	private:
		[[maybe_unused]] uint8_t __pad0639[0x3]; // 0x639
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnConnectionStateChanged"
		client::PlayerConnectedState m_iConnected; // 0x63c		
		// MNetworkEnable
		// MNetworkChangeCallback "OnPlayerControllerNameChanged"
		char m_iszPlayerName[128]; // 0x640		
	private:
		[[maybe_unused]] uint8_t __pad06c0[0x8]; // 0x6c0
	public:
		// MNetworkEnable
		// MNetworkEncoder "fixed64"
		// MNetworkChangeCallback "OnSteamIDChanged"
		uint64_t m_steamID; // 0x6c8		
		bool m_bIsLocalPlayerController; // 0x6d0		
	private:
		[[maybe_unused]] uint8_t __pad06d1[0x3]; // 0x6d1
	public:
		// MNetworkEnable
		uint32_t m_iDesiredFOV; // 0x6d4		
		
		// Static fields:
		static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBasePlayerController")->GetStaticFields()[0]->m_pInstance);};
		
		// Datamap fields:
		// bool fakeclient; // 0x7fffffff
		// bool is_hltv; // 0x7fffffff
		// const char * playername; // 0x7fffffff
		// bool reserving; // 0x7fffffff
		// void m_pCurrentCommand; // 0x6c0
	};
};
