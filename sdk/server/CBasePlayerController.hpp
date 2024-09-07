#pragma once
#include "client/ChatIgnoreType_t.hpp"
#include "client/PlayerConnectedState.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBasePlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x760
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
	class CBasePlayerController : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		uint64_t m_nInButtonsWhichAreToggles; // 0x4e0		
		// MNetworkEnable
		// MNetworkPriority "1"
		// MNetworkUserGroup "LocalPlayerExclusive"
		uint32_t m_nTickBase; // 0x4e8		
	private:
		[[maybe_unused]] uint8_t __pad04ec[0x2c]; // 0x4ec
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnPawnChanged"
		CHandle<server::CBasePlayerPawn> m_hPawn; // 0x518		
		// MNetworkEnable
		bool m_bKnownTeamMismatch; // 0x51c		
	private:
		[[maybe_unused]] uint8_t __pad051d[0x3]; // 0x51d
	public:
		CSplitScreenSlot m_nSplitScreenSlot; // 0x520		
		CHandle<server::CBasePlayerController> m_hSplitOwner; // 0x524		
		CUtlVector<CHandle<server::CBasePlayerController>> m_hSplitScreenPlayers; // 0x528		
		bool m_bIsHLTV; // 0x540		
	private:
		[[maybe_unused]] uint8_t __pad0541[0x3]; // 0x541
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnConnectionStateChanged"
		client::PlayerConnectedState m_iConnected; // 0x544		
		// MNetworkEnable
		// MNetworkChangeCallback "OnPlayerControllerNameChanged"
		char m_iszPlayerName[128]; // 0x548		
		CUtlString m_szNetworkIDString; // 0x5c8		
		float m_fLerpTime; // 0x5d0		
		bool m_bLagCompensation; // 0x5d4		
		bool m_bPredict; // 0x5d5		
		bool m_bAutoKickDisabled; // 0x5d6		
		bool m_bIsLowViolence; // 0x5d7		
		bool m_bGamePaused; // 0x5d8		
	private:
		[[maybe_unused]] uint8_t __pad05d9[0x12f]; // 0x5d9
	public:
		client::ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x708		
		float m_flLastPlayerTalkTime; // 0x70c		
		float m_flLastEntitySteadyState; // 0x710		
		int32_t m_nAvailableEntitySteadyState; // 0x714		
		bool m_bHasAnySteadyStateEnts; // 0x718		
	private:
		[[maybe_unused]] uint8_t __pad0719[0xf]; // 0x719
	public:
		// MNetworkEnable
		// MNetworkEncoder "fixed64"
		// MNetworkChangeCallback "OnSteamIDChanged"
		uint64_t m_steamID; // 0x728		
		// MNetworkEnable
		uint32_t m_iDesiredFOV; // 0x730		
		
		// Static fields:
		static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBasePlayerController")->GetStaticFields()[0]->m_pInstance);};
		
		// Datamap fields:
		// bool fakeclient; // 0x7fffffff
		// bool is_hltv; // 0x7fffffff
		// const char * playername; // 0x7fffffff
		// bool reserving; // 0x7fffffff
		// void m_pCurrentCommand; // 0x720
		// void m_LastCmd; // 0x5e0
		// void m_nLastRealCommandNumberExecuted; // 0x6ec
		// void m_nLastLateCommandExecuted; // 0x6f0
	};
};
