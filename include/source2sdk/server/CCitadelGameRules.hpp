#pragma once
#include "source2sdk/client/ECitadelGameMode.hpp"
#include "source2sdk/client/ECitadelMatchMode.hpp"
#include "source2sdk/client/EGameState.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CTeamplayRules.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    class CCitadelTrooperMinimap;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x27b0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bFreezePeriod"
    // static metadata: MNetworkVarNames "GameTime_t m_fLevelStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flGameStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flRoundStartTime"
    // static metadata: MNetworkVarNames "EGameState m_eGameState"
    // static metadata: MNetworkVarNames "EHANDLE m_hTowerAmber"
    // static metadata: MNetworkVarNames "EHANDLE m_hTowerSapphire"
    // static metadata: MNetworkVarNames "bool m_bEnemyInAmberBase"
    // static metadata: MNetworkVarNames "bool m_bEnemyInSapphireBase"
    // static metadata: MNetworkVarNames "Vector m_vMinimapMins"
    // static metadata: MNetworkVarNames "Vector m_vMinimapMaxs"
    // static metadata: MNetworkVarNames "bool m_bMatchSafeToAbandon"
    // static metadata: MNetworkVarNames "bool m_bNoDeathEnabled"
    // static metadata: MNetworkVarNames "bool m_bFastCooldownsEnabled"
    // static metadata: MNetworkVarNames "bool m_bStaminaCooldownsEnabled"
    // static metadata: MNetworkVarNames "bool m_bInfiniteResourcesEnabled"
    // static metadata: MNetworkVarNames "bool m_bFlexSlotsForcedUnlocked"
    // static metadata: MNetworkVarNames "ECitadelMatchMode m_eMatchMode"
    // static metadata: MNetworkVarNames "ECitadelGameMode m_eGameMode"
    // static metadata: MNetworkVarNames "uint32 m_unSpectatorCount"
    // static metadata: MNetworkVarNames "CHandle<CCitadelTrooperMinimap> m_hTrooperMinimap"
    // static metadata: MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterRebels"
    // static metadata: MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterCombine"
    // static metadata: MNetworkVarNames "bool m_bServerPaused"
    // static metadata: MNetworkVarNames "int m_iPauseTeam"
    // static metadata: MNetworkVarNames "int m_nMatchClockUpdateTick"
    // static metadata: MNetworkVarNames "float m_flMatchClockAtLastUpdate"
    // static metadata: MNetworkVarNames "bool m_bRequiresReportCardDismissal"
    // static metadata: MNetworkVarNames "int m_eGGTeam"
    // static metadata: MNetworkVarNames "GameTime_t m_flGGEndsAtTime"
    // static metadata: MNetworkVarNames "MatchID_t m_unMatchID"
    // static metadata: MNetworkVarNames "int m_nExperimentalGameplayState"
    // static metadata: MNetworkVarNames "GameTime_t m_flHeroDiedTime"
    #pragma pack(push, 1)
    class CCitadelGameRules : public server::CTeamplayRules
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x10]; // 0xc0
        // metadata: MNetworkEnable
        bool m_bFreezePeriod; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd1[0x3]; // 0xd1
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fLevelStartTime; // 0xd4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGameStartTime; // 0xd8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRoundStartTime; // 0xdc        
        // metadata: MNetworkEnable
        client::EGameState m_eGameState; // 0xe0        
        // metadata: MNetworkEnable
        // m_hTowerAmber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTowerAmber;
        char m_hTowerAmber[0x4]; // 0xe4        
        // metadata: MNetworkEnable
        // m_hTowerSapphire has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTowerSapphire;
        char m_hTowerSapphire[0x4]; // 0xe8        
        // metadata: MNetworkEnable
        bool m_bEnemyInAmberBase; // 0xec        
        // metadata: MNetworkEnable
        bool m_bEnemyInSapphireBase; // 0xed        
        [[maybe_unused]] std::uint8_t pad_0xee[0x2]; // 0xee
        // metadata: MNetworkEnable
        Vector m_vMinimapMins; // 0xf0        
        // metadata: MNetworkEnable
        Vector m_vMinimapMaxs; // 0xfc        
        // metadata: MNetworkEnable
        bool m_bMatchSafeToAbandon; // 0x108        
        // metadata: MNetworkEnable
        bool m_bNoDeathEnabled; // 0x109        
        // metadata: MNetworkEnable
        bool m_bFastCooldownsEnabled; // 0x10a        
        // metadata: MNetworkEnable
        bool m_bStaminaCooldownsEnabled; // 0x10b        
        // metadata: MNetworkEnable
        bool m_bInfiniteResourcesEnabled; // 0x10c        
        // metadata: MNetworkEnable
        bool m_bFlexSlotsForcedUnlocked; // 0x10d        
        [[maybe_unused]] std::uint8_t pad_0x10e[0x2]; // 0x10e
        // metadata: MNetworkEnable
        client::ECitadelMatchMode m_eMatchMode; // 0x110        
        // metadata: MNetworkEnable
        client::ECitadelGameMode m_eGameMode; // 0x114        
        // metadata: MNetworkEnable
        uint32_t m_unSpectatorCount; // 0x118        
        // metadata: MNetworkEnable
        // m_hTrooperMinimap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelTrooperMinimap> m_hTrooperMinimap;
        char m_hTrooperMinimap[0x4]; // 0x11c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // m_hCurrentHeroDrafterRebels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCurrentHeroDrafterRebels;
        char m_hCurrentHeroDrafterRebels[0x4]; // 0x120        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // m_hCurrentHeroDrafterCombine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCurrentHeroDrafterCombine;
        char m_hCurrentHeroDrafterCombine[0x4]; // 0x124        
        bool m_bDontUploadStats; // 0x128        
        [[maybe_unused]] std::uint8_t pad_0x129[0x3]; // 0x129
        int32_t m_iWinningTeam; // 0x12c        
        [[maybe_unused]] std::uint8_t pad_0x130[0x70]; // 0x130
        bool m_bSpawnedBots; // 0x1a0        
        bool m_bGuideBotAssigned; // 0x1a1        
        [[maybe_unused]] std::uint8_t pad_0x1a2[0x2]; // 0x1a2
        float m_timeLastSpawnCrates; // 0x1a4        
        bool m_bNotifiedClientsOfNextCrateSpawn; // 0x1a8        
        bool m_bEarlyCratesSpawned; // 0x1a9        
        bool m_bIsEarlyCrateGamestate; // 0x1aa        
        [[maybe_unused]] std::uint8_t pad_0x1ab[0x2a5]; // 0x1ab
        entity2::GameTime_t m_flGameTimeAllPlayersDisconnected; // 0x450        
        int32_t m_nNextHeroDraftPosition; // 0x454        
        [[maybe_unused]] std::uint8_t pad_0x458[0x1248]; // 0x458
        server::CountdownTimer m_CheckIdleTimer; // 0x16a0        
        [[maybe_unused]] std::uint8_t pad_0x16b8[0x1020]; // 0x16b8
        // metadata: MNetworkEnable
        bool m_bServerPaused; // 0x26d8        
        [[maybe_unused]] std::uint8_t pad_0x26d9[0x3]; // 0x26d9
        // metadata: MNetworkEnable
        int32_t m_iPauseTeam; // 0x26dc        
        // metadata: MNetworkEnable
        int32_t m_nMatchClockUpdateTick; // 0x26e0        
        // metadata: MNetworkEnable
        float m_flMatchClockAtLastUpdate; // 0x26e4        
        double m_flPauseTime; // 0x26e8        
        CPlayerSlot m_pausingPlayerId; // 0x26f0        
        CPlayerSlot m_unpausingPlayerId; // 0x26f4        
        float m_fPauseRawTime; // 0x26f8        
        float m_fPauseCurTime; // 0x26fc        
        float m_fUnpauseRawTime; // 0x2700        
        float m_fUnpauseCurTime; // 0x2704        
        [[maybe_unused]] std::uint8_t pad_0x2708[0x50]; // 0x2708
        // metadata: MNetworkEnable
        bool m_bRequiresReportCardDismissal; // 0x2758        
        [[maybe_unused]] std::uint8_t pad_0x2759[0x3]; // 0x2759
        entity2::GameTime_t m_flPreGameWaitEndTime; // 0x275c        
        entity2::GameTime_t m_flReportCardDismissalWaitStart; // 0x2760        
        int32_t m_nLastPreGameCount; // 0x2764        
        // metadata: MNetworkEnable
        int32_t m_eGGTeam; // 0x2768        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGGEndsAtTime; // 0x276c        
        // metadata: MNetworkEnable
        client::MatchID_t m_unMatchID; // 0x2770        
        // metadata: MNetworkEnable
        int32_t m_nExperimentalGameplayState; // 0x2778        
        int32_t m_nPlayerDeathEventID; // 0x277c        
        int32_t m_nReplayChangedEvent; // 0x2780        
        int32_t m_nGameOverEvent; // 0x2784        
        [[maybe_unused]] std::uint8_t pad_0x2788[0x20]; // 0x2788
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flHeroDiedTime; // 0x27a8        
        [[maybe_unused]] std::uint8_t pad_0x27ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelGameRules because it is not a standard-layout class
    static_assert(sizeof(CCitadelGameRules) == 0x27b0);
};
