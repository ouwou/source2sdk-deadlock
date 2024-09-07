#pragma once
#include "client/CitadelLobbyPlayerSlot_t.hpp"
#include "client/EGuidedBotMatchObjective.hpp"
#include "client/EPlayerPlayState.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBasePlayerController.hpp"
#include "server/PlayerDataGlobal_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelPlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa68
	// Has VTable
	// 
	// MNetworkVarNames "EPlayerPlayState m_ePlayState"
	// MNetworkVarNames "int m_iGuidedBotMatchLastHits"
	// MNetworkVarNames "int m_iGuidedBotMatchOrbsSecured"
	// MNetworkVarNames "int m_iGuidedBotMatchOrbsDenied"
	// MNetworkVarNames "int m_iGuidedBotMatchDamageToGuardians"
	// MNetworkVarNames "int m_iGuidedBotMatchDamageToPlayers"
	// MNetworkVarNames "int m_iGuidedBotMatchDamageTaken"
	// MNetworkVarNames "int m_iGuidedBotMatchNetWorth"
	// MNetworkVarNames "int m_iGuidedBotMatchModsPurchased"
	// MNetworkVarNames "int m_iGuidedBotMatchAbilityUpgrades"
	// MNetworkVarNames "float m_flGuideBotMatchLastTaskNagVO"
	// MNetworkVarNames "float m_flGuideBotLastTimeTaskCompleted"
	// MNetworkVarNames "EGuidedBotMatchObjective m_eGuidedBotMatchObjective"
	// MNetworkVarNames "int8 m_nAssignedLane"
	// MNetworkVarNames "int8 m_nOriginalLaneAssignment"
	// MNetworkVarNames "bool m_bSwapCastModeAbility1"
	// MNetworkVarNames "bool m_bSwapCastModeAbility2"
	// MNetworkVarNames "bool m_bSwapCastModeAbility3"
	// MNetworkVarNames "bool m_bSwapCastModeAbility4"
	// MNetworkVarNames "bool m_bIsKingPanda"
	// MNetworkVarNames "bool m_bBotDisconnectTakeover"
	// MNetworkVarNames "bool m_bInTeamChat"
	// MNetworkVarNames "bool m_bInPartyChat"
	// MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
	// MNetworkVarNames "PlayerDataGlobal_t m_PlayerDataGlobal"
	// MNetworkVarNames "int8 m_nDeathReplayAvailable"
	// MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
	class CCitadelPlayerController : public server::CBasePlayerController
	{
	public:
		// MNetworkEnable
		client::EPlayerPlayState m_ePlayState; // 0x760		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchLastHits; // 0x764		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchOrbsSecured; // 0x768		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchOrbsDenied; // 0x76c		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchDamageToGuardians; // 0x770		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchDamageToPlayers; // 0x774		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchDamageTaken; // 0x778		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchNetWorth; // 0x77c		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchModsPurchased; // 0x780		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x784		
		// MNetworkEnable
		float m_flGuideBotMatchLastTaskNagVO; // 0x788		
		// MNetworkEnable
		float m_flGuideBotLastTimeTaskCompleted; // 0x78c		
		// MNetworkEnable
		client::EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x790		
		// MNetworkEnable
		// MNetworkChangeCallback "AssignedLaneChanged"
		int8_t m_nAssignedLane; // 0x794		
		// MNetworkEnable
		int8_t m_nOriginalLaneAssignment; // 0x795		
		// MNetworkEnable
		bool m_bSwapCastModeAbility1; // 0x796		
		// MNetworkEnable
		bool m_bSwapCastModeAbility2; // 0x797		
		// MNetworkEnable
		bool m_bSwapCastModeAbility3; // 0x798		
		// MNetworkEnable
		bool m_bSwapCastModeAbility4; // 0x799		
		// MNetworkEnable
		bool m_bIsKingPanda; // 0x79a		
		// MNetworkEnable
		bool m_bBotDisconnectTakeover; // 0x79b		
		// MNetworkEnable
		// MNetworkChangeCallback "ChatGroupsChanged"
		bool m_bInTeamChat; // 0x79c		
		// MNetworkEnable
		// MNetworkChangeCallback "ChatGroupsChanged"
		bool m_bInPartyChat; // 0x79d		
	private:
		[[maybe_unused]] uint8_t __pad079e[0xc2]; // 0x79e
	public:
		// MNetworkEnable
		CHandle<server::CCitadelPlayerPawn> m_hHeroPawn; // 0x860		
	private:
		[[maybe_unused]] uint8_t __pad0864[0x14]; // 0x864
	public:
		// MNetworkEnable
		server::PlayerDataGlobal_t m_PlayerDataGlobal; // 0x878		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nDeathReplayAvailable; // 0xa50		
		// MNetworkEnable
		client::CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xa51		
	private:
		[[maybe_unused]] uint8_t __pad0a52[0x2]; // 0xa52
	public:
		entity2::GameTime_t m_flLastCommsTime; // 0xa54		
		entity2::GameTime_t m_flLastFailedCommsTime; // 0xa58		
		bool m_bLastCommsWasDoublePing; // 0xa5c		
	private:
		[[maybe_unused]] uint8_t __pad0a5d[0x3]; // 0xa5d
	public:
		int32_t m_nGuideBotNumTasksComplete; // 0xa60		
		
		// Datamap fields:
		// void CCitadelPlayerControllerResourceDataThink; // 0x0
	};
};
