#pragma once
#include "source2sdk/client/CBasePlayerController.hpp"
#include "source2sdk/client/CitadelLobbyPlayerSlot_t.hpp"
#include "source2sdk/client/EGuidedBotMatchObjective.hpp"
#include "source2sdk/client/EPlayerPlayState.hpp"
#include "source2sdk/client/HeroBuildID_t.hpp"
#include "source2sdk/client/PlayerDataGlobal_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_CitadelPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x958
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
    class CCitadelPlayerController : public client::CBasePlayerController
    {
    public:
        // metadata: MNetworkEnable
        client::EPlayerPlayState m_ePlayState; // 0x6f8        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchLastHits; // 0x6fc        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchOrbsSecured; // 0x700        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchOrbsDenied; // 0x704        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageToGuardians; // 0x708        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageToPlayers; // 0x70c        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageTaken; // 0x710        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchNetWorth; // 0x714        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchModsPurchased; // 0x718        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x71c        
        // metadata: MNetworkEnable
        float m_flGuideBotMatchLastTaskNagVO; // 0x720        
        // metadata: MNetworkEnable
        float m_flGuideBotLastTimeTaskCompleted; // 0x724        
        // metadata: MNetworkEnable
        client::EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x728        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AssignedLaneChanged"
        int8_t m_nAssignedLane; // 0x72c        
        // metadata: MNetworkEnable
        int8_t m_nOriginalLaneAssignment; // 0x72d        
        // metadata: MNetworkEnable
        bool m_bIsKingPanda; // 0x72e        
        // metadata: MNetworkEnable
        bool m_bBotDisconnectTakeover; // 0x72f        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ChatGroupsChanged"
        bool m_bInTeamChat; // 0x730        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ChatGroupsChanged"
        bool m_bInPartyChat; // 0x731        
        [[maybe_unused]] std::uint8_t pad_0x732[0x2]; // 0x732
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::HeroBuildID_t m_unHeroBuildID; // 0x734        
        // metadata: MNetworkEnable
        // m_hHeroPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelPlayerPawn> m_hHeroPawn;
        char m_hHeroPawn[0x4]; // 0x738        
        [[maybe_unused]] std::uint8_t pad_0x73c[0x34]; // 0x73c
        // metadata: MNetworkEnable
        client::PlayerDataGlobal_t m_PlayerDataGlobal; // 0x770        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nDeathReplayAvailable; // 0x948        
        // metadata: MNetworkEnable
        client::CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0x949        
        bool m_bHasCheckedFriendName; // 0x94a        
        [[maybe_unused]] std::uint8_t pad_0x94b[0x5]; // 0x94b
        CUtlString m_sFriendName; // 0x950        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerController because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerController) == 0x958);
};
