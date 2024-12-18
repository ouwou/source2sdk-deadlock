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
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CCitadelPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xbf0
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
    class CCitadelPlayerController : public server::CBasePlayerController
    {
    public:
        // metadata: MNetworkEnable
        client::EPlayerPlayState m_ePlayState; // 0x7d8        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchLastHits; // 0x7dc        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchOrbsSecured; // 0x7e0        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchOrbsDenied; // 0x7e4        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageToGuardians; // 0x7e8        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageToPlayers; // 0x7ec        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageTaken; // 0x7f0        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchNetWorth; // 0x7f4        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchModsPurchased; // 0x7f8        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x7fc        
        // metadata: MNetworkEnable
        float m_flGuideBotMatchLastTaskNagVO; // 0x800        
        // metadata: MNetworkEnable
        float m_flGuideBotLastTimeTaskCompleted; // 0x804        
        // metadata: MNetworkEnable
        client::EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x808        
        // metadata: MNetworkEnable
        int32_t m_nCurrentRank; // 0x80c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AssignedLaneChanged"
        int8_t m_nAssignedLane; // 0x810        
        // metadata: MNetworkEnable
        int8_t m_nOriginalLaneAssignment; // 0x811        
        // metadata: MNetworkEnable
        bool m_bIsKingPanda; // 0x812        
        // metadata: MNetworkEnable
        bool m_bBotDisconnectTakeover; // 0x813        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ChatGroupsChanged"
        bool m_bInTeamChat; // 0x814        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ChatGroupsChanged"
        bool m_bInPartyChat; // 0x815        
        [[maybe_unused]] std::uint8_t pad_0x816[0x2]; // 0x816
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::HeroBuildID_t m_unHeroBuildID; // 0x818        
        // metadata: MNetworkEnable
        bool m_bLaneSwapLocked; // 0x81c        
        [[maybe_unused]] std::uint8_t pad_0x81d[0x3]; // 0x81d
        // metadata: MNetworkEnable
        // m_vecLaneSwapRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_vecLaneSwapRequests;
        char m_vecLaneSwapRequests[0x18]; // 0x820        
        // metadata: MNetworkEnable
        // m_vecLaneSwapRejects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_vecLaneSwapRejects;
        char m_vecLaneSwapRejects[0x18]; // 0x838        
        // metadata: MNetworkEnable
        // m_vecMutedPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<int32_t> m_vecMutedPlayers;
        char m_vecMutedPlayers[0x18]; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x868[0xd8]; // 0x868
        // metadata: MNetworkEnable
        // m_hHeroPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelPlayerPawn> m_hHeroPawn;
        char m_hHeroPawn[0x4]; // 0x940        
        [[maybe_unused]] std::uint8_t pad_0x944[0x34]; // 0x944
        // metadata: MNetworkEnable
        server::PlayerDataGlobal_t m_PlayerDataGlobal; // 0x978        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nDeathReplayAvailable; // 0xb98        
        // metadata: MNetworkEnable
        client::CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xb99        
        [[maybe_unused]] std::uint8_t pad_0xb9a[0x2]; // 0xb9a
        entity2::GameTime_t m_flLastCommsTime; // 0xb9c        
        entity2::GameTime_t m_flLastFailedCommsTime; // 0xba0        
        bool m_bLastCommsWasDoublePing; // 0xba4        
        [[maybe_unused]] std::uint8_t pad_0xba5[0x3]; // 0xba5
        int32_t m_nGuideBotNumTasksComplete; // 0xba8        
        bool m_bHasBeenReportedAsCheater; // 0xbac        
        bool m_bHasGCACKedCheaterReport; // 0xbad        
        bool m_bHasBeenLoggedAsCheater; // 0xbae        
        [[maybe_unused]] std::uint8_t pad_0xbaf[0x41];
        
        // Datamap fields:
        // void CCitadelPlayerControllerResourceDataThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerController because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerController) == 0xbf0);
};
