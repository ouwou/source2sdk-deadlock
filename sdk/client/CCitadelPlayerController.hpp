#pragma once
#include "client/CBasePlayerController.hpp"
#include "client/CitadelLobbyPlayerSlot_t.hpp"
#include "client/EGuidedBotMatchObjective.hpp"
#include "client/EPlayerPlayState.hpp"
#include "client/PlayerDataGlobal_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelPlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x930
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
	class CCitadelPlayerController : public client::CBasePlayerController
	{
	public:
		// MNetworkEnable
		client::EPlayerPlayState m_ePlayState; // 0x6f0		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchLastHits; // 0x6f4		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchOrbsSecured; // 0x6f8		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchOrbsDenied; // 0x6fc		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchDamageToGuardians; // 0x700		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchDamageToPlayers; // 0x704		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchDamageTaken; // 0x708		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchNetWorth; // 0x70c		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchModsPurchased; // 0x710		
		// MNetworkEnable
		int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x714		
		// MNetworkEnable
		float m_flGuideBotMatchLastTaskNagVO; // 0x718		
		// MNetworkEnable
		float m_flGuideBotLastTimeTaskCompleted; // 0x71c		
		// MNetworkEnable
		client::EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x720		
		// MNetworkEnable
		// MNetworkChangeCallback "AssignedLaneChanged"
		int8_t m_nAssignedLane; // 0x724		
		// MNetworkEnable
		int8_t m_nOriginalLaneAssignment; // 0x725		
		// MNetworkEnable
		bool m_bSwapCastModeAbility1; // 0x726		
		// MNetworkEnable
		bool m_bSwapCastModeAbility2; // 0x727		
		// MNetworkEnable
		bool m_bSwapCastModeAbility3; // 0x728		
		// MNetworkEnable
		bool m_bSwapCastModeAbility4; // 0x729		
		// MNetworkEnable
		bool m_bIsKingPanda; // 0x72a		
		// MNetworkEnable
		bool m_bBotDisconnectTakeover; // 0x72b		
		// MNetworkEnable
		// MNetworkChangeCallback "ChatGroupsChanged"
		bool m_bInTeamChat; // 0x72c		
		// MNetworkEnable
		// MNetworkChangeCallback "ChatGroupsChanged"
		bool m_bInPartyChat; // 0x72d		
	private:
		[[maybe_unused]] uint8_t __pad072e[0x2]; // 0x72e
	public:
		// MNetworkEnable
		CHandle<client::C_CitadelPlayerPawn> m_hHeroPawn; // 0x730		
	private:
		[[maybe_unused]] uint8_t __pad0734[0x14]; // 0x734
	public:
		// MNetworkEnable
		client::PlayerDataGlobal_t m_PlayerDataGlobal; // 0x748		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		int8_t m_nDeathReplayAvailable; // 0x920		
		// MNetworkEnable
		client::CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0x921		
		bool m_bHasCheckedFriendName; // 0x922		
	private:
		[[maybe_unused]] uint8_t __pad0923[0x5]; // 0x923
	public:
		CUtlString m_sFriendName; // 0x928		
	};
};
