#pragma once
#include "source2sdk/client/CitadelLobbyPlayerSlot_t.hpp"
#include "source2sdk/client/EGuidedBotMatchObjective.hpp"
#include "source2sdk/client/EPlayerPlayState.hpp"
#include "source2sdk/client/HeroBuildID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerController.hpp"
#include "source2sdk/server/PlayerDataGlobal_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xae8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EPlayerPlayState m_ePlayState"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchLastHits"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchOrbsSecured"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchOrbsDenied"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageToGuardians"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageToPlayers"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageTaken"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchNetWorth"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchModsPurchased"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchAbilityUpgrades"
    // static metadata: MNetworkVarNames "float m_flGuideBotMatchLastTaskNagVO"
    // static metadata: MNetworkVarNames "float m_flGuideBotLastTimeTaskCompleted"
    // static metadata: MNetworkVarNames "EGuidedBotMatchObjective m_eGuidedBotMatchObjective"
    // static metadata: MNetworkVarNames "int m_nCurrentRank"
    // static metadata: MNetworkVarNames "int8 m_nAssignedLane"
    // static metadata: MNetworkVarNames "int8 m_nOriginalLaneAssignment"
    // static metadata: MNetworkVarNames "bool m_bIsKingPanda"
    // static metadata: MNetworkVarNames "bool m_bBotDisconnectTakeover"
    // static metadata: MNetworkVarNames "bool m_bInTeamChat"
    // static metadata: MNetworkVarNames "bool m_bInPartyChat"
    // static metadata: MNetworkVarNames "HeroBuildID_t m_unHeroBuildID"
    // static metadata: MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
    // static metadata: MNetworkVarNames "PlayerDataGlobal_t m_PlayerDataGlobal"
    // static metadata: MNetworkVarNames "int8 m_nDeathReplayAvailable"
    // static metadata: MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
    #pragma pack(push, 1)
    class CCitadelPlayerController : public server::CBasePlayerController
    {
    public:
        // metadata: MNetworkEnable
        client::EPlayerPlayState m_ePlayState; // 0x768        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchLastHits; // 0x76c        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchOrbsSecured; // 0x770        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchOrbsDenied; // 0x774        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageToGuardians; // 0x778        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageToPlayers; // 0x77c        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageTaken; // 0x780        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchNetWorth; // 0x784        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchModsPurchased; // 0x788        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x78c        
        // metadata: MNetworkEnable
        float m_flGuideBotMatchLastTaskNagVO; // 0x790        
        // metadata: MNetworkEnable
        float m_flGuideBotLastTimeTaskCompleted; // 0x794        
        // metadata: MNetworkEnable
        client::EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x798        
        // metadata: MNetworkEnable
        int32_t m_nCurrentRank; // 0x79c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AssignedLaneChanged"
        int8_t m_nAssignedLane; // 0x7a0        
        // metadata: MNetworkEnable
        int8_t m_nOriginalLaneAssignment; // 0x7a1        
        // metadata: MNetworkEnable
        bool m_bIsKingPanda; // 0x7a2        
        // metadata: MNetworkEnable
        bool m_bBotDisconnectTakeover; // 0x7a3        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ChatGroupsChanged"
        bool m_bInTeamChat; // 0x7a4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ChatGroupsChanged"
        bool m_bInPartyChat; // 0x7a5        
        [[maybe_unused]] std::uint8_t pad_0x7a6[0x2]; // 0x7a6
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::HeroBuildID_t m_unHeroBuildID; // 0x7a8        
        [[maybe_unused]] std::uint8_t pad_0x7ac[0xd4]; // 0x7ac
        // metadata: MNetworkEnable
        // m_hHeroPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelPlayerPawn> m_hHeroPawn;
        char m_hHeroPawn[0x4]; // 0x880        
        [[maybe_unused]] std::uint8_t pad_0x884[0x34]; // 0x884
        // metadata: MNetworkEnable
        server::PlayerDataGlobal_t m_PlayerDataGlobal; // 0x8b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nDeathReplayAvailable; // 0xa90        
        // metadata: MNetworkEnable
        client::CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xa91        
        [[maybe_unused]] std::uint8_t pad_0xa92[0x2]; // 0xa92
        entity2::GameTime_t m_flLastCommsTime; // 0xa94        
        entity2::GameTime_t m_flLastFailedCommsTime; // 0xa98        
        bool m_bLastCommsWasDoublePing; // 0xa9c        
        [[maybe_unused]] std::uint8_t pad_0xa9d[0x3]; // 0xa9d
        int32_t m_nGuideBotNumTasksComplete; // 0xaa0        
        bool m_bHasBeenReportedAsCheater; // 0xaa4        
        bool m_bHasGCACKedCheaterReport; // 0xaa5        
        bool m_bHasBeenLoggedAsCheater; // 0xaa6        
        [[maybe_unused]] std::uint8_t pad_0xaa7[0x41];
        
        // Datamap fields:
        // void CCitadelPlayerControllerResourceDataThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerController because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerController) == 0xae8);
};
