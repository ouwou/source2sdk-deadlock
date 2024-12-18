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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_CitadelPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa60
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
    // static metadata: MNetworkVarNames "bool m_bLaneSwapLocked"
    // static metadata: MNetworkVarNames "EHANDLE m_vecLaneSwapRequests"
    // static metadata: MNetworkVarNames "EHANDLE m_vecLaneSwapRejects"
    // static metadata: MNetworkVarNames "int32 m_vecMutedPlayers"
    // static metadata: MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
    // static metadata: MNetworkVarNames "PlayerDataGlobal_t m_PlayerDataGlobal"
    // static metadata: MNetworkVarNames "int8 m_nDeathReplayAvailable"
    // static metadata: MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
    #pragma pack(push, 1)
    class CCitadelPlayerController : public client::CBasePlayerController
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
        // metadata: MNetworkEnable
        bool m_bLaneSwapLocked; // 0x7ac        
        [[maybe_unused]] std::uint8_t pad_0x7ad[0x3]; // 0x7ad
        // metadata: MNetworkEnable
        // m_vecLaneSwapRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecLaneSwapRequests;
        char m_vecLaneSwapRequests[0x18]; // 0x7b0        
        // metadata: MNetworkEnable
        // m_vecLaneSwapRejects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecLaneSwapRejects;
        char m_vecLaneSwapRejects[0x18]; // 0x7c8        
        // metadata: MNetworkEnable
        // m_vecMutedPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<int32_t> m_vecMutedPlayers;
        char m_vecMutedPlayers[0x18]; // 0x7e0        
        // metadata: MNetworkEnable
        // m_hHeroPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelPlayerPawn> m_hHeroPawn;
        char m_hHeroPawn[0x4]; // 0x7f8        
        [[maybe_unused]] std::uint8_t pad_0x7fc[0x34]; // 0x7fc
        // metadata: MNetworkEnable
        client::PlayerDataGlobal_t m_PlayerDataGlobal; // 0x830        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nDeathReplayAvailable; // 0xa50        
        // metadata: MNetworkEnable
        client::CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xa51        
        bool m_bHasCheckedFriendName; // 0xa52        
        [[maybe_unused]] std::uint8_t pad_0xa53[0x5]; // 0xa53
        CUtlString m_sFriendName; // 0xa58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerController because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerController) == 0xa60);
};
